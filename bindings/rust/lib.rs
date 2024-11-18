//! This crate provides TS corpus test support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [LANGUAGE][] constant to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//! ==================
//! Return statements
//! ==================
//!
//! func x() int {
//!   return 1;
//! }
//!
//! ---
//!
//! (source_file
//!   (function_definition
//!     (identifier)
//!     (parameter_list)
//!     (primitive_type)
//!     (block
//!       (return_statement (number)))))
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_test::LANGUAGE;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading Test parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_test() -> *const ();
}

/// The tree-sitter [`LanguageFn`][LanguageFn] for this grammar.
///
/// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_test) };

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

/// The syntax highlight queries for this grammar.
pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/test/highlights.scm");

/// The language injection queries for this grammar.
pub const INJECTIONS_QUERY: &str = include_str!("../../queries/test/injections.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading Test parser");
    }
}
