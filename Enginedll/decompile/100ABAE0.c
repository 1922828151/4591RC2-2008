/*
 * func-name: ?isSelected@CRETabPages@@QAE_NPAVCREab@@@Z
 * func-address: 0x100abae0
 * callers: 0x100bd6f0
 * callees: none
 */

char __thiscall CRETabPages::isSelected(CRETabPages *this, struct CREab *a2)
{
  int v2; // esi
  int v3; // edx
  int i; // eax

  v2 = *((_DWORD *)this + 134);
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  for ( i = *((_DWORD *)this + 133) + 524; a2 != *(struct CREab **)(i + 4) || !*(_BYTE *)i; i += 532 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
