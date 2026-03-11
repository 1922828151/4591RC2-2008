/*
 * func-name: ?MakeNameUnique@Editor@@QAEXPAVActor@@@Z
 * func-address: 0x1007eb80
 * callers: 0x1004d7e0, 0x1004e070, 0x100542a0, 0x100df7d0
 * callees: 0x101377c0, 0x1017ad40
 */

void __thiscall Editor::MakeNameUnique(Editor *this, struct Actor *a2)
{
  int v2; // eax
  int v3; // [esp-1Ch] [ebp-68h] BYREF
  _BYTE v4[28]; // [esp+8h] [ebp-44h] BYREF
  _BYTE v5[28]; // [esp+24h] [ebp-28h] BYREF
  int v6; // [esp+48h] [ebp-4h]

  std::string::string(v4, (char *)a2 + 444);
  v6 = 0;
  std::string::operator=((char *)a2 + 444, &unk_101C32FA);
  while ( World::FindActor(v4) )
  {
    std::string::string(&v3, v4);
    v2 = sub_1017AD40(v5, v3);
    LOBYTE(v6) = 1;
    std::string::operator=(v4, v2);
    LOBYTE(v6) = 0;
    std::string::~string(v5);
  }
  std::string::operator=((char *)a2 + 444, v4);
  v6 = -1;
  std::string::~string(v4);
}
