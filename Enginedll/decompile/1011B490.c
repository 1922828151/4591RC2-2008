/*
 * func-name: ?Parse@Serializer@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUAsyncPacket@@@Z
 * func-address: 0x1011b490
 * callers: 0x10174aa0
 * callees: 0x10010270, 0x10097220, 0x100977a0, 0x10097800, 0x1011b3a0, 0x1017aa70, 0x101a2500
 */

char __stdcall Serializer::Parse(char a1, int a2, int a3, int a4, int a5, int a6, int a7, const char *a8)
{
  int last_of; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const char *v12; // eax
  IParse *Parser; // esi
  const char *v15; // eax
  int v16; // [esp-20h] [ebp-8Ch] BYREF
  int v17; // [esp-1Ch] [ebp-88h] BYREF
  int v18; // [esp-18h] [ebp-84h]
  int v19; // [esp-14h] [ebp-80h]
  int v20; // [esp-10h] [ebp-7Ch]
  int v21; // [esp-Ch] [ebp-78h]
  int v22; // [esp-8h] [ebp-74h]
  const char *v23; // [esp-4h] [ebp-70h]
  int *v24; // [esp+8h] [ebp-64h]
  _BYTE v25[28]; // [esp+Ch] [ebp-60h] BYREF
  _BYTE v26[28]; // [esp+28h] [ebp-44h] BYREF
  _BYTE v27[28]; // [esp+44h] [ebp-28h] BYREF
  int v28; // [esp+68h] [ebp-4h]

  v28 = 0;
  sub_1017AA70();
  if ( FindMedia((int)&a1, (int)"Maps", 0, 0)
    || FindMedia((int)&a1, (int)"Models", 0, 0)
    || FindMedia((int)&a1, (int)"LogicModels", 0, 0) )
  {
    goto LABEL_18;
  }
  last_of = std::string::find_last_of(&a1, ".", std::string::npos);
  if ( last_of == std::string::npos )
  {
LABEL_16:
    v28 = -1;
    std::string::~string(&a1);
    return 0;
  }
  std::string::substr(&a1, v25, last_of, std::string::npos);
  LOBYTE(v28) = 1;
  if ( (unsigned __int8)std::operator==<char>(v25, ".xml") || (unsigned __int8)std::operator==<char>(v25, ".reb") )
  {
    if ( (unsigned __int8)std::operator==<char>(v25, ".xml") )
    {
      v23 = ".reb";
    }
    else
    {
      if ( !(unsigned __int8)std::operator==<char>(v25, ".reb") )
        goto LABEL_12;
      v23 = ".xml";
    }
    std::string::operator=(v25, v23);
  }
LABEL_12:
  v9 = std::string::find_last_of(&a1, ".", std::string::npos);
  v10 = std::string::substr(&a1, v27, 0, v9);
  LOBYTE(v28) = 2;
  v11 = std::operator+<char>(v26, v10, v25);
  LOBYTE(v28) = 3;
  std::string::operator=(&a1, v11);
  LOBYTE(v28) = 2;
  std::string::~string(v26);
  LOBYTE(v28) = 1;
  std::string::~string(v27);
  if ( !FindMedia((int)&a1, (int)"Maps", 0, 0)
    && !FindMedia((int)&a1, (int)"Models", 0, 0)
    && !FindMedia((int)&a1, (int)"LogicModels", 0, 0) )
  {
    v12 = (const char *)std::string::c_str(&a1);
    Warning("Couldn't find file '%s'", v12);
    LOBYTE(v28) = 0;
    std::string::~string(v25);
    goto LABEL_16;
  }
  LOBYTE(v28) = 0;
  std::string::~string(v25);
LABEL_18:
  v24 = &v17;
  std::string::string(&v17, &a1);
  Parser = (IParse *)Serializer::GetParser(v17, v18, v19, v20, v21, v22, (int)v23);
  if ( !Parser )
  {
    v15 = (const char *)std::string::c_str(&a1);
    SeriousWarning("No compatible Parse serializer for '%s' world.", v15);
    goto LABEL_16;
  }
  v23 = a8;
  a8 = (const char *)&v16;
  std::string::string(&v16, &a1);
  if ( !(**(unsigned __int8 (__thiscall ***)(IParse *, int, int, int, int, int, int, int, const char *))Parser)(
          Parser,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23) )
    goto LABEL_16;
  IParse::~IParse(Parser);
  operator delete(Parser);
  v28 = -1;
  std::string::~string(&a1);
  return 1;
}
