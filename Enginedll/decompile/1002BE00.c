/*
 * func-name: ?insert@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAEXV?$_Vector_iterator@VEditorVar@@V?$allocator@VEditorVar@@@std@@@2@IABVEditorVar@@@Z
 * func-address: 0x1002be00
 * callers: none
 * callees: 0x1000f8d0
 */

void __thiscall std::vector<EditorVar>::insert(
        void *this,
        int a2,
        struct EditorVar *a3,
        unsigned int a4,
        struct EditorVar *a5)
{
  std::vector<EditorVar>::_Insert_n((int)this, a2, a3, a4, a5);
}
