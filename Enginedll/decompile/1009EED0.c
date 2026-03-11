/*
 * func-name: ?EnumerateFrames@ModelFrame@@QAEXAAV?$vector@PAUModelFrame@@V?$allocator@PAUModelFrame@@@std@@@std@@@Z
 * func-address: 0x1009eed0
 * callers: 0x10088cd0, 0x1008c3e0, 0x1009eed0, 0x100ef0a0, 0x1010a350, 0x1010c190
 * callees: 0x1002eac0, 0x1009eed0
 */

_DWORD *__thiscall ModelFrame::EnumerateFrames(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  _DWORD *result; // eax

  v2 = (_DWORD *)a2;
  do
  {
    a2 = (int)this;
    result = std::vector<ModelFrame *>::push_back(v2, &a2);
    if ( this[89] )
      result = (_DWORD *)ModelFrame::EnumerateFrames(v2);
    this = (_DWORD *)this[90];
  }
  while ( this );
  return result;
}
