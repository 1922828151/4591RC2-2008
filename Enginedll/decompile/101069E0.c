/*
 * func-name: ??0PostProcess@@IAE@XZ
 * func-address: 0x101069e0
 * callers: 0x10106b20
 * callees: 0x100971c0, 0x1017c0d0
 */

PostProcess *__thiscall PostProcess::PostProcess(PostProcess *this)
{
  char v3; // [esp-38h] [ebp-58h] BYREF
  int v4; // [esp-34h] [ebp-54h]
  int v5; // [esp-30h] [ebp-50h]
  int v6; // [esp-2Ch] [ebp-4Ch]
  int v7; // [esp-28h] [ebp-48h]
  int v8; // [esp-24h] [ebp-44h]
  void *v9; // [esp-20h] [ebp-40h]
  char v10; // [esp-1Ch] [ebp-3Ch] BYREF
  int v11; // [esp-18h] [ebp-38h]
  int v12; // [esp-14h] [ebp-34h]
  int v13; // [esp-10h] [ebp-30h]
  int v14; // [esp-Ch] [ebp-2Ch]
  int v15; // [esp-8h] [ebp-28h]
  int v16; // [esp-4h] [ebp-24h]
  PostProcess *v17; // [esp+8h] [ebp-18h]
  char *v18; // [esp+Ch] [ebp-14h]
  char *v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+1Ch] [ebp-4h]

  v17 = this;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  v18 = &v10;
  v9 = &unk_101C8840;
  v20 = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 20) = 0;
  *(_BYTE *)this = 0;
  std::string::string(&v10, v9);
  v19 = &v3;
  LOBYTE(v20) = 1;
  std::string::string(&v3, "MotionBlur");
  LOBYTE(v20) = 2;
  Engine::Instance();
  LOBYTE(v20) = 0;
  *((_BYTE *)this + 1) = sub_1017C0D0(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
  return this;
}
