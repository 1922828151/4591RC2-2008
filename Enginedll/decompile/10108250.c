/*
 * func-name: ?ReloadPermanentEffects@PostProcessEffect_Permanent@@SAXXZ
 * func-address: 0x10108250
 * callers: 0x10108550, 0x101087e0
 * callees: 0x10108190, 0x101a2534
 */

void __cdecl PostProcessEffect_Permanent::ReloadPermanentEffects()
{
  unsigned int v0; // esi
  int v1; // edi
  struct PostProcessEffect *v2; // ebp
  unsigned __int8 *v3; // eax
  int v4; // ecx
  char *v5; // ecx
  char v6; // [esp-44h] [ebp-6Ch] BYREF
  int v7; // [esp-40h] [ebp-68h]
  int v8; // [esp-3Ch] [ebp-64h]
  int v9; // [esp-38h] [ebp-60h]
  int v10; // [esp-34h] [ebp-5Ch]
  int v11; // [esp-30h] [ebp-58h]
  int v12; // [esp-2Ch] [ebp-54h]
  char v13; // [esp-28h] [ebp-50h] BYREF
  int v14; // [esp-24h] [ebp-4Ch]
  int v15; // [esp-20h] [ebp-48h]
  int v16; // [esp-1Ch] [ebp-44h]
  int v17; // [esp-18h] [ebp-40h]
  int v18; // [esp-14h] [ebp-3Ch]
  int v19; // [esp-10h] [ebp-38h]
  int v20; // [esp-Ch] [ebp-34h]
  int v21; // [esp-8h] [ebp-30h]
  int v22; // [esp-4h] [ebp-2Ch]
  struct PostProcessEffect *v23; // [esp+10h] [ebp-18h]
  char *v24; // [esp+14h] [ebp-14h]
  char *v25; // [esp+18h] [ebp-10h]
  int v26; // [esp+24h] [ebp-4h]

  v0 = 0;
  v1 = 0;
  while ( dword_11240FFC && v0 < (dword_11241000 - (int)dword_11240FFC) >> 6 )
  {
    v2 = (struct PostProcessEffect *)operator new(0x1F0u);
    v23 = v2;
    v26 = 0;
    if ( v2 )
    {
      v3 = (unsigned __int8 *)dword_11240FFC;
      v22 = 1;
      if ( !dword_11240FFC || (v4 = dword_11241000, v0 >= (dword_11241000 - (int)dword_11240FFC) >> 6) )
      {
        invalid_parameter_noinfo();
        v4 = dword_11241000;
        v3 = (unsigned __int8 *)dword_11240FFC;
      }
      v21 = v3[v1 + 60];
      if ( !v3 || v0 >= (v4 - (int)v3) >> 6 )
      {
        invalid_parameter_noinfo();
        v4 = dword_11241000;
        v3 = (unsigned __int8 *)dword_11240FFC;
      }
      v20 = *(_DWORD *)&v3[v1 + 56];
      if ( !v3 || v0 >= (v4 - (int)v3) >> 6 )
      {
        invalid_parameter_noinfo();
        v3 = (unsigned __int8 *)dword_11240FFC;
      }
      v24 = &v13;
      std::string::string(&v13, &v3[v1 + 28]);
      v5 = (char *)dword_11240FFC;
      LOBYTE(v26) = 1;
      if ( !dword_11240FFC || v0 >= (dword_11241000 - (int)dword_11240FFC) >> 6 )
      {
        invalid_parameter_noinfo();
        v5 = (char *)dword_11240FFC;
      }
      v25 = &v6;
      std::string::string(&v6, &v5[v1]);
      LOBYTE(v26) = 0;
      PostProcessEffect_Permanent::PostProcessEffect_Permanent(
        v2,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    ++v0;
    v26 = -1;
    v1 += 64;
  }
}
