/*
 * func-name: ?SetItemBlendColor@CItemHolder@@QAE_NHHK@Z
 * func-address: 0x101533f0
 * callers: none
 * callees: none
 */

char __thiscall CItemHolder::SetItemBlendColor(CItemHolder *this, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // edi
  int v7; // ecx
  int v8; // eax

  v5 = a2 + a3 * *((_DWORD *)this + 149);
  if ( (signed int)v5 > *((_DWORD *)this + 142) )
    return 0;
  v7 = *((_DWORD *)this + 135);
  if ( !v7 || v5 >= (*((_DWORD *)this + 136) - v7) >> 2 )
    invalid_parameter_noinfo();
  v8 = *((_DWORD *)this + 135);
  if ( !*(_DWORD *)(v8 + 4 * v5) )
    return 0;
  if ( !v8 || v5 >= (*((_DWORD *)this + 136) - v8) >> 2 )
    invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 135) + 4 * v5) + 72) = a4;
  return 1;
}
