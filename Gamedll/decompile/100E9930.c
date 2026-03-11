/*
 * func-name: ??0SoundMgr@@IAE@XZ_0
 * func-address: 0x100e9930
 * callers: 0x1001805c
 * callees: 0x10014010, 0x10015852, 0x102bdcd0, 0x102bde10, 0x102c9d50
 */

SoundMgr *__thiscall SoundMgr::SoundMgr(SoundMgr *this)
{
  char *v2; // edi
  int v3; // eax
  float **v4; // eax
  float *v5; // ecx
  bool v6; // zf
  _DWORD **v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  _DWORD **v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  char v14; // [esp-38h] [ebp-64h] BYREF
  int v15; // [esp-34h] [ebp-60h]
  int v16; // [esp-30h] [ebp-5Ch]
  int v17; // [esp-2Ch] [ebp-58h]
  int v18; // [esp-28h] [ebp-54h]
  int v19; // [esp-24h] [ebp-50h]
  int v20; // [esp-20h] [ebp-4Ch]
  char v21; // [esp-1Ch] [ebp-48h] BYREF
  int v22; // [esp-18h] [ebp-44h]
  int v23; // [esp-14h] [ebp-40h]
  int v24; // [esp-10h] [ebp-3Ch]
  int v25; // [esp-Ch] [ebp-38h]
  int v26; // [esp-8h] [ebp-34h]
  int v27; // [esp-4h] [ebp-30h]
  float v28; // [esp+14h] [ebp-18h]
  SoundMgr *v29; // [esp+18h] [ebp-14h]
  char *v30; // [esp+1Ch] [ebp-10h]
  int v31; // [esp+28h] [ebp-4h]

  v29 = this;
  v2 = (char *)this + 4;
  *(_DWORD *)this = &SoundMgr::`vftable';
  *((_DWORD *)this + 2) = sub_10015852();
  *((_DWORD *)v2 + 2) = 0;
  v31 = 0;
  *((_DWORD *)this + 5) = sub_10015852();
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = sub_10014010();
  *((_DWORD *)this + 9) = 0;
  v28 = COERCE_FLOAT(&v21);
  LOBYTE(v31) = 2;
  std::string::string(&v21, "Audio");
  v30 = &v14;
  LOBYTE(v31) = 3;
  std::string::string(&v14, "SoundDistanceWeight");
  LOBYTE(v31) = 4;
  Engine::Instance();
  LOBYTE(v31) = 2;
  v28 = sub_102BDE10(v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27);
  *((float *)this + 15) = v28;
  v30 = &v21;
  std::string::string(&v21, "Audio");
  v28 = COERCE_FLOAT(&v14);
  LOBYTE(v31) = 5;
  std::string::string(&v14, "SoundRangeWeight");
  LOBYTE(v31) = 6;
  Engine::Instance();
  LOBYTE(v31) = 2;
  v28 = sub_102BDE10(v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27);
  *((float *)this + 16) = v28;
  v30 = &v21;
  std::string::string(&v21, "Audio");
  v28 = COERCE_FLOAT(&v14);
  LOBYTE(v31) = 7;
  std::string::string(&v14, "MaxSoundCount");
  LOBYTE(v31) = 8;
  Engine::Instance();
  LOBYTE(v31) = 2;
  v3 = sub_102BDCD0(v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27);
  *((float *)this + 13) = 0.0;
  *((_DWORD *)this + 10) = v3;
  *((float *)this + 14) = 0.0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 17) = 0;
  v4 = (float **)*((_DWORD *)v2 + 1);
  v5 = *v4;
  *v4 = (float *)v4;
  *(_DWORD *)(*((_DWORD *)v2 + 1) + 4) = *((_DWORD *)v2 + 1);
  v6 = v5 == *((float **)v2 + 1);
  *((_DWORD *)v2 + 2) = 0;
  if ( !v6 )
  {
    do
    {
      v28 = *v5;
      operator delete(v5);
      v5 = (float *)LODWORD(v28);
    }
    while ( LODWORD(v28) != *((_DWORD *)v2 + 1) );
  }
  v7 = (_DWORD **)*((_DWORD *)this + 5);
  v8 = *v7;
  *v7 = v7;
  *(_DWORD *)(*((_DWORD *)this + 5) + 4) = *((_DWORD *)this + 5);
  v6 = v8 == *((_DWORD **)this + 5);
  *((_DWORD *)this + 6) = 0;
  if ( !v6 )
  {
    do
    {
      v9 = (_DWORD *)*v8;
      operator delete(v8);
      v8 = v9;
    }
    while ( v9 != *((_DWORD **)this + 5) );
  }
  v10 = (_DWORD **)*((_DWORD *)this + 8);
  v11 = *v10;
  *v10 = v10;
  *(_DWORD *)(*((_DWORD *)this + 8) + 4) = *((_DWORD *)this + 8);
  v6 = v11 == *((_DWORD **)this + 8);
  *((_DWORD *)this + 9) = 0;
  if ( !v6 )
  {
    do
    {
      v12 = (_DWORD *)*v11;
      operator delete(v11);
      v11 = v12;
    }
    while ( v12 != *((_DWORD **)this + 8) );
  }
  return this;
}
