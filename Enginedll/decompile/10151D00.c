/*
 * func-name: ?HandleMouse@CControlBox@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x10151d00
 * callers: none
 * callees: none
 */

char __thiscall CControlBox::HandleMouse(
        CControlBox *this,
        unsigned int a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5)
{
  unsigned int v5; // edi
  int i; // ebx
  int v8; // eax
  int v9; // eax

  v5 = 0;
  for ( i = 0; ; i += 12 )
  {
    v8 = *((_DWORD *)this + 134);
    if ( !v8 || v5 >= (*((_DWORD *)this + 135) - v8) / 12 )
      break;
    v9 = *((_DWORD *)this + 134);
    if ( !v9 || v5 >= (*((_DWORD *)this + 135) - v9) / 12 )
      invalid_parameter_noinfo();
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, unsigned int, LONG, LONG, unsigned int, int))(**(_DWORD **)(i + *((_DWORD *)this + 134))
                                                                                                + 92))(
           *(_DWORD *)(i + *((_DWORD *)this + 134)),
           a2,
           a3.x,
           a3.y,
           a4,
           a5) )
    {
      return 1;
    }
    ++v5;
  }
  return 0;
}
