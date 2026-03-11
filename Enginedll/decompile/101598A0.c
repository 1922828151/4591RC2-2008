/*
 * func-name: ?GetFX@MaterialIntersect@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@PAVMaterial@@@Z
 * func-address: 0x101598a0
 * callers: none
 * callees: 0x10159490
 */

int __thiscall MaterialIntersect::GetFX(
        _DWORD *this,
        int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *a10)
{
  int v10; // ebx
  int v12; // eax
  char v14; // [esp-38h] [ebp-90h] BYREF
  int v15; // [esp-34h] [ebp-8Ch]
  int v16; // [esp-30h] [ebp-88h]
  int v17; // [esp-2Ch] [ebp-84h]
  int v18; // [esp-28h] [ebp-80h]
  int v19; // [esp-24h] [ebp-7Ch]
  int v20; // [esp-20h] [ebp-78h]
  char v21; // [esp-1Ch] [ebp-74h] BYREF
  int v22; // [esp-18h] [ebp-70h]
  int v23; // [esp-14h] [ebp-6Ch]
  int v24; // [esp-10h] [ebp-68h]
  int v25; // [esp-Ch] [ebp-64h]
  int v26; // [esp-8h] [ebp-60h]
  int v27; // [esp-4h] [ebp-5Ch]
  int v28; // [esp+Ch] [ebp-4Ch]
  char *v29; // [esp+10h] [ebp-48h]
  _BYTE v30[28]; // [esp+14h] [ebp-44h] BYREF
  _BYTE v31[28]; // [esp+30h] [ebp-28h] BYREF
  int v32; // [esp+54h] [ebp-4h]

  v10 = 0;
  v28 = 0;
  v32 = 1;
  if ( a10 )
  {
    v12 = (int)(a10 + 220);
  }
  else
  {
    v12 = std::string::string(v31, &unk_101CD67B);
    v10 = 1;
    LOBYTE(v32) = 2;
    v28 = 1;
  }
  std::string::string(v30, v12);
  v32 = 4;
  if ( (v10 & 1) != 0 )
  {
    v10 &= ~1u;
    v28 = v10;
    std::string::~string(v31);
  }
  a10 = &v21;
  std::string::string(&v21, v30);
  v29 = &v14;
  LOBYTE(v32) = 5;
  std::string::string(&v14, &a3);
  LOBYTE(v32) = 4;
  MaterialIntersect::GetFX(this, a2, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27);
  v28 = v10 | 2;
  LOBYTE(v32) = 1;
  std::string::~string(v30);
  LOBYTE(v32) = 0;
  std::string::~string(&a3);
  return a2;
}
