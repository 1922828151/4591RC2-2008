/*
 * func-name: ?_Ufill@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@IAEPAVEditorVar@@PAV3@IABV3@@Z
 * func-address: 0x1000d740
 * callers: 0x1000f8d0
 * callees: 0x1000cc70
 */

int __stdcall std::vector<EditorVar>::_Ufill(EditorVar *a1, int a2, struct EditorVar *a3)
{
  sub_1000CC70(a1, a2, a3);
  return (int)a1 + 96 * a2;
}
