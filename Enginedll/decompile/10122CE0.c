/*
 * func-name: ??0ShaderVar@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@EditorVar@@W4DeleteType@0@PAX@Z
 * func-address: 0x10122ce0
 * callers: 0x10003a50, 0x10008f60, 0x10018750, 0x1003a4c0, 0x10040990, 0x10042bf0, 0x100e4db0, 0x100e6db0, 0x100e7390, 0x10122e00, 0x1012ffd0
 * callees: 0x10012320, 0x1011faf0
 */

int __thiscall ShaderVar::ShaderVar(
        int this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char *a11)
{
  char v13; // [esp-28h] [ebp-44h] BYREF
  int v14; // [esp-24h] [ebp-40h]
  int v15; // [esp-20h] [ebp-3Ch]
  int v16; // [esp-1Ch] [ebp-38h]
  int v17; // [esp-18h] [ebp-34h]
  int v18; // [esp-14h] [ebp-30h]
  int v19; // [esp-10h] [ebp-2Ch]
  int v20; // [esp-Ch] [ebp-28h]
  int v21; // [esp-8h] [ebp-24h]
  char *v22; // [esp-4h] [ebp-20h]
  int v23[2]; // [esp+8h] [ebp-14h] BYREF
  int v24; // [esp+18h] [ebp-4h]

  v23[1] = this;
  v24 = 2;
  std::string::string(this + 4);
  std::string::string(this + 32);
  v23[0] = this;
  sub_10012320(&ShaderVar::variables, v23);
  v22 = a11;
  v21 = a10;
  v20 = a9;
  a11 = &v13;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_BYTE *)(this + 272) = 0;
  *(_BYTE *)(this + 273) = 0;
  std::string::string(&v13, &a2);
  ShaderVar::Set((_DWORD *)this, v13, v14, v15, v16, v17, v18, v19, v20, v21, (int)v22);
  v24 = -1;
  std::string::~string(&a2);
  return this;
}
