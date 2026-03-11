/*
 * func-name: ?LoadWorld@Serializer@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWorld@@@Z
 * func-address: 0x1011acf0
 * callers: 0x1004ef90, 0x10087570, 0x10087a10, 0x10088400, 0x1010a6c0, 0x1013e2e0
 * callees: 0x1000e6c0, 0x10097220, 0x100977a0, 0x10097800, 0x1011aa80, 0x1011f300, 0x1017aa70
 */

char __thiscall Serializer::LoadWorld(
        void *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9)
{
  int last_of; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const char *v14; // eax
  OBJLoad *Loader; // esi
  const char *v17; // eax
  int v18; // [esp-20h] [ebp-8Ch] BYREF
  int v19; // [esp-1Ch] [ebp-88h] BYREF
  int v20; // [esp-18h] [ebp-84h]
  int v21; // [esp-14h] [ebp-80h]
  int v22; // [esp-10h] [ebp-7Ch]
  int v23; // [esp-Ch] [ebp-78h]
  int v24; // [esp-8h] [ebp-74h]
  const char *v25; // [esp-4h] [ebp-70h]
  int *v26; // [esp+8h] [ebp-64h]
  _BYTE v27[28]; // [esp+Ch] [ebp-60h] BYREF
  _BYTE v28[28]; // [esp+28h] [ebp-44h] BYREF
  _BYTE v29[28]; // [esp+44h] [ebp-28h] BYREF
  int v30; // [esp+68h] [ebp-4h]

  v30 = 0;
  sub_1017AA70();
  if ( FindMedia((int)&a2, (int)"Maps", 0, 0)
    || FindMedia((int)&a2, (int)"Models", 0, 0)
    || FindMedia((int)&a2, (int)"LogicModels", 0, 0) )
  {
    goto LABEL_18;
  }
  last_of = std::string::find_last_of(&a2, ".", std::string::npos);
  if ( last_of == std::string::npos )
  {
LABEL_16:
    v30 = -1;
    std::string::~string(&a2);
    return 0;
  }
  std::string::substr(&a2, v27, last_of, std::string::npos);
  LOBYTE(v30) = 1;
  if ( (unsigned __int8)std::operator==<char>(v27, ".xml") || (unsigned __int8)std::operator==<char>(v27, ".reb") )
  {
    if ( (unsigned __int8)std::operator==<char>(v27, ".xml") )
    {
      v25 = ".reb";
    }
    else
    {
      if ( !(unsigned __int8)std::operator==<char>(v27, ".reb") )
        goto LABEL_12;
      v25 = ".xml";
    }
    std::string::operator=(v27, v25);
  }
LABEL_12:
  v11 = std::string::find_last_of(&a2, ".", std::string::npos);
  v12 = std::string::substr(&a2, v29, 0, v11);
  LOBYTE(v30) = 2;
  v13 = std::operator+<char>(v28, v12, v27);
  LOBYTE(v30) = 3;
  std::string::operator=(&a2, v13);
  LOBYTE(v30) = 2;
  std::string::~string(v28);
  LOBYTE(v30) = 1;
  std::string::~string(v29);
  if ( !FindMedia((int)&a2, (int)"Maps", 0, 0)
    && !FindMedia((int)&a2, (int)"Models", 0, 0)
    && !FindMedia((int)&a2, (int)"LogicModels", 0, 0) )
  {
    v14 = (const char *)std::string::c_str(&a2);
    Warning("Couldn't find file '%s'", v14);
    LOBYTE(v30) = 0;
    std::string::~string(v27);
    goto LABEL_16;
  }
  LOBYTE(v30) = 0;
  std::string::~string(v27);
LABEL_18:
  v26 = &v19;
  std::string::string(&v19, &a2);
  Loader = Serializer::GetLoader(v19, v20, v21, v22, v23, v24, (int)v25);
  if ( !Loader )
  {
    v17 = (const char *)std::string::c_str(&a2);
    SeriousWarning("No compatible Load serializer for '%s' world.", v17);
    goto LABEL_16;
  }
  v25 = a9;
  a9 = (const char *)&v18;
  std::string::string(&v18, &a2);
  if ( !(**(unsigned __int8 (__thiscall ***)(OBJLoad *, int, int, int, int, int, int, int, const char *))Loader)(
          Loader,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25) )
    goto LABEL_16;
  sub_1000E6C0((int)this, (int)Loader + 12);
  sub_1011F300(Loader, 1);
  v30 = -1;
  std::string::~string(&a2);
  return 1;
}
