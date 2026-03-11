/*
 * func-name: sub_1017AD40
 * func-address: 0x1017ad40
 * callers: 0x1004f2e0, 0x1007ea80, 0x1007eb80, 0x10080a00, 0x100846a0, 0x1009d930, 0x10116820
 * callees: 0x1003b320
 */

int __cdecl sub_1017AD40(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  char *v4; // eax
  int v5; // eax
  const char *v6; // eax
  int v7; // esi
  int v8; // esi
  int v9; // eax
  _BYTE v11[28]; // [esp+1Ch] [ebp-44h] BYREF
  _BYTE v12[28]; // [esp+38h] [ebp-28h] BYREF
  int v13; // [esp+5Ch] [ebp-4h]

  v13 = 1;
  v2 = -1;
  v3 = std::string::length(&a2) - 1;
  if ( v3 < 0 )
    goto LABEL_5;
  do
  {
    v4 = (char *)std::string::operator[](&a2, v3);
    if ( !isdigit(*v4) )
      break;
    v2 = v3--;
  }
  while ( v3 >= 0 );
  if ( v2 == -1 )
  {
LABEL_5:
    std::operator+<char>(a1, &a2, &unk_101CE7B8);
  }
  else
  {
    v5 = std::string::substr(&a2, v11, v2, std::string::npos);
    LOBYTE(v13) = 2;
    v6 = (const char *)std::string::c_str(v5);
    v7 = strtol(v6, 0, 10);
    LOBYTE(v13) = 1;
    std::string::~string(v11);
    v8 = sub_1003B320((int)v12, v7 + 1);
    LOBYTE(v13) = 3;
    v9 = std::string::substr(&a2, v11, 0, v2);
    LOBYTE(v13) = 4;
    std::operator+<char>(a1, v9, v8);
    LOBYTE(v13) = 3;
    std::string::~string(v11);
    LOBYTE(v13) = 1;
    std::string::~string(v12);
  }
  LOBYTE(v13) = 0;
  std::string::~string(&a2);
  return a1;
}
