/*
 * func-name: ?EnumerateActorsInSphere@World@@QAE?AV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@_N0ABVVector@@M@Z
 * func-address: 0x1013f7b0
 * callers: 0x10139890
 * callees: 0x1000d4b0, 0x1005f1c0, 0x101a2500
 */

_DWORD *__thiscall World::EnumerateActorsInSphere(void *this, _DWORD *a2, char a3, char a4, int a5, float a6)
{
  int v6; // esi
  void *v7; // eax
  char *v8; // esi
  char *v9; // ebp
  int v10; // eax
  void **v13; // [esp+24h] [ebp-20h] BYREF
  char v14[4]; // [esp+28h] [ebp-1Ch] BYREF
  void *Destination; // [esp+2Ch] [ebp-18h]
  unsigned int v16; // [esp+30h] [ebp-14h]
  int v17; // [esp+34h] [ebp-10h]
  int v18; // [esp+40h] [ebp-4h]

  v6 = a3 != 0;
  if ( a4 )
    v6 |= 2u;
  v13 = &EnumColliders::`vftable';
  Destination = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v7 = sub_1005F1C0();
  (*(void (__thiscall **)(void *, int, int, _DWORD, _DWORD, void ***))(*(_DWORD *)v7 + 44))(
    v7,
    v6,
    a5,
    LODWORD(a6),
    0,
    &v13);
  v8 = (char *)Destination;
  if ( (unsigned int)Destination > v16 )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v9 = (char *)v16;
    if ( (unsigned int)Destination > v16 )
      invalid_parameter_noinfo();
    if ( !v14 )
      invalid_parameter_noinfo();
    if ( v8 == v9 )
      break;
    if ( !v14 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v8 >= v16 )
      invalid_parameter_noinfo();
    if ( *(void **)(*(_DWORD *)v8 + 712) == this )
    {
      if ( (unsigned int)v8 >= v16 )
        invalid_parameter_noinfo();
      v8 += 4;
    }
    else
    {
      v10 = (int)(v16 - (_DWORD)(v8 + 4)) >> 2;
      if ( v10 > 0 )
        memmove_s(v8, 4 * v10, v8 + 4, 4 * v10);
      v16 -= 4;
    }
  }
  std::vector<Actor *>::vector<Actor *>(a2, (int)v14);
  if ( Destination )
    operator delete(Destination);
  return a2;
}
