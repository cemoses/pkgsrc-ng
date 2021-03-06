$NetBSD$

--- bfd/elf32-sh.c.orig	Mon Mar 25 08:06:20 2013
+++ bfd/elf32-sh.c
@@ -3285,6 +3285,10 @@ readonly_dynrelocs (struct elf_link_hash_entry *h, voi
 	{
 	  struct bfd_link_info *info = (struct bfd_link_info *) inf;
 
+          if (info->warn_shared_textrel)
+            (*_bfd_error_handler)
+              (_("warning: dynamic relocation in readonly section `%s'"),
+              h->root.root.string);
 	  info->flags |= DF_TEXTREL;
 
 	  /* Not an error, just cut short the traversal.  */
