/*
 * func-name: ?read@Stream_Base@Utility@Outpop@@QAEHPADH@Z
 * func-address: 0x1000f090
 * callers: none
 * callees: 0x10019580
 */

int __thiscall Outpop::Utility::Stream_Base::read(Outpop::Utility::Stream_Base *this, char *a2, int Size)
{
  int v4; // eax
  int result; // eax
  _DWORD *v6; // ecx

  v4 = *((_DWORD *)this + 4);
  if ( Size > *((_DWORD *)this + 3) - v4 )
    return -1;
  v6 = (_DWORD *)*((_DWORD *)this + 2);
  if ( v4 + Size > v6[1] )
    return -1;
  memcpy(a2, (const void *)(v4 + *v6), Size);
  result = Size;
  if ( Size != -1 )
    *((_DWORD *)this + 4) += Size;
  return result;
}
