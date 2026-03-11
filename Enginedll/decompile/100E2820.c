/*
 * func-name: ?Load@MaterialLibrary@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100e2820
 * callers: none
 * callees: 0x10001720, 0x10043050
 */

char __thiscall MaterialLibrary::Load(char *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char v9; // bl
  char v11; // [esp-20h] [ebp-98h] BYREF
  int v12; // [esp-1Ch] [ebp-94h]
  int v13; // [esp-18h] [ebp-90h]
  int v14; // [esp-14h] [ebp-8Ch]
  int v15; // [esp-10h] [ebp-88h]
  int v16; // [esp-Ch] [ebp-84h]
  int v17; // [esp-8h] [ebp-80h]
  char *v18; // [esp-4h] [ebp-7Ch]
  char *v19; // [esp+8h] [ebp-70h]
  _BYTE v20[32]; // [esp+Ch] [ebp-6Ch] BYREF
  _BYTE v21[64]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v22; // [esp+74h] [ebp-4h]

  v22 = 0;
  std::string::operator=(this + 16, &a2);
  XMLSystem::XMLSystem((XMLSystem *)v20);
  v18 = this;
  v19 = &v11;
  LOBYTE(v22) = 1;
  std::string::string(&v11, &a2);
  v9 = MaterialSerializer::Load((MaterialSerializer *)v20, v11, v12, v13, v14, v15, v16, v17, v18);
  LOBYTE(v22) = 2;
  std::string::~string(v21);
  LOBYTE(v22) = 0;
  std::string::~string(v20);
  v22 = -1;
  std::string::~string(&a2);
  return v9;
}
