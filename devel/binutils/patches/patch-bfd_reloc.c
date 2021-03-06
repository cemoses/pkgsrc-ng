$NetBSD$

--- bfd/reloc.c.orig	Tue Sep  4 12:53:42 2012
+++ bfd/reloc.c
@@ -1776,6 +1776,17 @@ ENUMDOC
   Relocations used by 68K ELF.
 
 ENUM
+  BFD_RELOC_VAX_GLOB_DAT
+ENUMX
+  BFD_RELOC_VAX_GLOB_REF
+ENUMX
+  BFD_RELOC_VAX_JMP_SLOT
+ENUMX
+  BFD_RELOC_VAX_RELATIVE
+ENUMDOC
+  Relocations used by VAX ELF.
+
+ENUM
   BFD_RELOC_32_BASEREL
 ENUMX
   BFD_RELOC_16_BASEREL
