/*
 * func-name: ?EnumerateLightsInSphere@World@@QAE?AV?$vector@PAVLight@@V?$allocator@PAVLight@@@std@@@std@@ABVVector@@M@Z
 * func-address: 0x1013f8f0
 * callers: 0x10139890
 * callees: 0x10021d90, 0x1005f1c0, 0x101a2500
 */

_DWORD *__thiscall World::EnumerateLightsInSphere(void *this, _DWORD *a2, int a3, float a4)
{
  void *v4; // eax
  char *v5; // esi
  char *v6; // ebx
  int v7; // eax
  void **v10; // [esp+24h] [ebp-20h] BYREF
  char v11[4]; // [esp+28h] [ebp-1Ch] BYREF
  void *Destination; // [esp+2Ch] [ebp-18h]
  unsigned int v13; // [esp+30h] [ebp-14h]
  int v14; // [esp+34h] [ebp-10h]
  int v15; // [esp+40h] [ebp-4h]

  v10 = &EnumLights::`vftable';
  Destination = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v4 = sub_1005F1C0();
  (*(void (__thiscall **)(void *, int, int, _DWORD, _DWORD, void ***))(*(_DWORD *)v4 + 44))(
    v4,
    4,
    a3,
    LODWORD(a4),
    0,
    &v10);
  v5 = (char *)Destination;
  if ( (unsigned int)Destination > v13 )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v6 = (char *)v13;
    if ( (unsigned int)Destination > v13 )
      invalid_parameter_noinfo();
    if ( !v11 )
      invalid_parameter_noinfo();
    if ( v5 == v6 )
      break;
    if ( !v11 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v5 >= v13 )
      invalid_parameter_noinfo();
    if ( *(void **)(*(_DWORD *)v5 + 712) == this )
    {
      if ( (unsigned int)v5 >= v13 )
        invalid_parameter_noinfo();
      v5 += 4;
    }
    else
    {
      v7 = (int)(v13 - (_DWORD)(v5 + 4)) >> 2;
      if ( v7 > 0 )
        memmove_s(v5, 4 * v7, v5 + 4, 4 * v7);
      v13 -= 4;
    }
  }
  sub_10021D90(a2, (int)v11);
  if ( Destination )
    operator delete(Destination);
  return a2;
}
