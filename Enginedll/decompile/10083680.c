/*
 * func-name: ?SaveSelected@Editor@@QAE_NPBD@Z
 * func-address: 0x10083680
 * callers: none
 * callees: 0x100109c0, 0x1011b2a0
 */

char __thiscall Editor::SaveSelected(Editor *this, const char *a2)
{
  int v3; // eax
  const char *v4; // esi
  char v5; // bl
  char v7; // [esp-20h] [ebp-50h] BYREF
  int v8; // [esp-1Ch] [ebp-4Ch]
  int v9; // [esp-18h] [ebp-48h]
  int v10; // [esp-14h] [ebp-44h]
  int v11; // [esp-10h] [ebp-40h]
  int v12; // [esp-Ch] [ebp-3Ch]
  int v13; // [esp-8h] [ebp-38h]
  const char *v14; // [esp-4h] [ebp-34h]
  _BYTE v15[28]; // [esp+8h] [ebp-28h] BYREF
  int v16; // [esp+2Ch] [ebp-4h]

  v14 = a2;
  *((_BYTE *)this + 2121) = 1;
  std::string::string(v15, v14);
  v3 = *((_DWORD *)this + 562);
  v4 = (char *)this + 2244;
  v16 = 0;
  if ( v3 && (*((_DWORD *)v4 + 2) - v3) >> 2 && *(_DWORD *)(**((_DWORD **)v4 + 1) + 716) )
  {
    v14 = v4;
    std::string::string(&v7, v15);
    LOBYTE(v16) = 1;
    Serializer::Instance();
    LOBYTE(v16) = 0;
    v5 = Serializer::Save(v7, v8, v9, v10, v11, v12, v13, v14);
    v16 = -1;
    std::string::~string(v15);
    return v5;
  }
  else
  {
    v16 = -1;
    std::string::~string(v15);
    return 0;
  }
}
