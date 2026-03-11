/*
 * func-name: ??0Factory@@IAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
 * func-address: 0x10013a60
 * callers: 0x10097070, 0x100970a0, 0x100970d0, 0x10097100, 0x10097130, 0x10097160, 0x10097190, 0x1015c050, 0x10166f50, 0x10166f80, 0x101677e0, 0x1016eb40, 0x101b7f70, 0x101b7fb0, 0x101b7ff0, 0x101b8030, 0x101b8070, 0x101b80b0, 0x101b80f0, 0x101b88a0, 0x101b8950, 0x101b8990, 0x101b89e0, 0x101b8a20
 * callees: 0x10010a60, 0x10013960
 */

char *__thiscall Factory::Factory(
        char *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  char *v11; // edi
  _DWORD *v12; // eax
  char v13; // cl
  char v15[36]; // [esp-1Ch] [ebp-38h] BYREF
  char *v16; // [esp+8h] [ebp-14h]
  char *v17; // [esp+Ch] [ebp-10h]
  int v18; // [esp+18h] [ebp-4h]

  v16 = this;
  v11 = this + 8;
  v18 = 0;
  *(_DWORD *)this = &Factory::`vftable';
  std::string::string(this + 8);
  v17 = v15;
  LOBYTE(v18) = 1;
  std::string::string(v15, &a2);
  Factory::RegisterHash(v15[0]);
  std::string::operator=(v11, &a2);
  v12 = sub_10010A60(&_registry, (int)&a2);
  v13 = a10;
  *v12 = this;
  LOBYTE(v12) = a9;
  this[5] = v13;
  this[4] = (char)v12;
  v18 = -1;
  std::string::~string(&a2);
  return this;
}
