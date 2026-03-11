/*
 * func-name: ?CheckScripts@Editor@@IAEPAVActor@@PAVWorld@@AAVVector@@1@Z
 * func-address: 0x10080780
 * callers: 0x10085cc0
 * callees: 0x10001370, 0x1007fa00
 */

struct Actor *__thiscall Editor::CheckScripts(Editor *this, struct World *a2, struct Vector *a3, struct Vector *a4)
{
  unsigned int i; // ebx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  int v12; // ecx
  float v14[4]; // [esp-30h] [ebp-64h] BYREF
  char v15; // [esp-20h] [ebp-54h]
  int v16; // [esp-1Ch] [ebp-50h]
  int v17; // [esp-18h] [ebp-4Ch]
  char v18; // [esp-14h] [ebp-48h]
  int v19; // [esp-10h] [ebp-44h]
  int v20; // [esp-Ch] [ebp-40h]
  struct Vector *v21; // [esp-8h] [ebp-3Ch]
  struct Vector *v22; // [esp-4h] [ebp-38h]
  float v23; // [esp+10h] [ebp-24h]
  float v24; // [esp+14h] [ebp-20h]
  float v25; // [esp+18h] [ebp-1Ch]
  float v26[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v27[3]; // [esp+28h] [ebp-Ch] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)a2 + 806);
    if ( !v5 || i >= (*((_DWORD *)a2 + 807) - v5) >> 2 )
      return 0;
    if ( std::string::length(*(_DWORD *)(*((_DWORD *)a2 + 806) + 4 * i) + 472) )
    {
      v6 = *((_DWORD *)a2 + 806);
      if ( !v6 || i >= (*((_DWORD *)a2 + 807) - v6) >> 2 )
        invalid_parameter_noinfo();
      v7 = *((_DWORD *)a2 + 806);
      if ( !*(_DWORD *)(*(_DWORD *)(v7 + 4 * i) + 716) )
      {
        if ( !v7 || i >= (*((_DWORD *)a2 + 807) - v7) >> 2 )
          invalid_parameter_noinfo();
        v8 = *(float **)(4 * i + *((_DWORD *)a2 + 806));
        v9 = v8[214];
        v10 = v8[215];
        v11 = v8[216];
        v23 = v9;
        v24 = v10;
        v25 = v11;
        v22 = a4;
        v26[0] = v9 + 0.5;
        v21 = a3;
        v26[1] = v10 + 0.5;
        v26[2] = v11 + 0.5;
        v27[0] = v9 - 0.5;
        v27[1] = v10 - 0.5;
        v27[2] = v11 - 0.5;
        sub_10001370(v14, v27, v26);
        if ( Editor::CheckBox(
               SLOBYTE(v14[0]),
               SLODWORD(v14[1]),
               SLODWORD(v14[2]),
               SLODWORD(v14[3]),
               v15,
               v16,
               v17,
               v18,
               v19,
               v20,
               *(float *)&v21,
               *(float *)&v22) )
        {
          break;
        }
      }
    }
  }
  v12 = *((_DWORD *)a2 + 806);
  if ( !v12 || i >= (*((_DWORD *)a2 + 807) - v12) >> 2 )
    invalid_parameter_noinfo();
  return *(struct Actor **)(*((_DWORD *)a2 + 806) + 4 * i);
}
