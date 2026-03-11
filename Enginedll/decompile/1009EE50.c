/*
 * func-name: ?EnumerateMeshes@ModelFrame@@QAEXAAV?$vector@PAUModelFrame@@V?$allocator@PAUModelFrame@@@std@@@std@@@Z
 * func-address: 0x1009ee50
 * callers: 0x10034690, 0x10034920, 0x1007c180, 0x1007da70, 0x10082810, 0x10082b00, 0x100833b0, 0x10085e90, 0x10086a00, 0x1008ce00, 0x1008e470, 0x1009ee50, 0x100ea5d0, 0x100eefb0, 0x100ef210, 0x10137930, 0x101430d0
 * callees: 0x1002eac0, 0x1009ee50
 */

_DWORD *__thiscall ModelFrame::EnumerateMeshes(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  int v4; // ecx
  _DWORD *result; // eax

  v2 = (_DWORD *)a2;
  do
  {
    v4 = this[1];
    if ( v4 && (this[2] - v4) >> 2 && *(_DWORD *)this[1]
      || (result = (_DWORD *)std::operator!=<char>(this + 18, &unk_101C46D1), (_BYTE)result) )
    {
      a2 = (int)this;
      result = std::vector<ModelFrame *>::push_back(v2, &a2);
    }
    if ( this[89] )
      result = (_DWORD *)ModelFrame::EnumerateMeshes(v2);
    this = (_DWORD *)this[90];
  }
  while ( this );
  return result;
}
