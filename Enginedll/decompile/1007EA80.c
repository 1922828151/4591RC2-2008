/*
 * func-name: ?FixName@Editor@@QAEXPAVActor@@@Z
 * func-address: 0x1007ea80
 * callers: 0x10080030, 0x10084160
 * callees: 0x1009d930, 0x101377c0, 0x1017ad40
 */

void __thiscall Editor::FixName(struct World **this, struct Actor *a2)
{
  int v3; // eax
  int v4; // eax
  ModelFrame *v5; // eax
  int v6; // [esp-1Ch] [ebp-6Ch] BYREF
  _BYTE v7[28]; // [esp+Ch] [ebp-44h] BYREF
  _BYTE v8[28]; // [esp+28h] [ebp-28h] BYREF
  int v9; // [esp+4Ch] [ebp-4h]

  std::string::string(v7, (char *)a2 + 444);
  v9 = 0;
  while ( World::FindActor(v7) )
  {
    std::string::string(&v6, v7);
    v3 = sub_1017AD40(v8, v6);
    LOBYTE(v9) = 1;
    std::string::operator=(v7, v3);
    LOBYTE(v9) = 0;
    std::string::~string(v8);
  }
  std::string::operator=((char *)a2 + 444, v7);
  v4 = *((_DWORD *)a2 + 179);
  if ( v4 )
  {
    v5 = *(ModelFrame **)(v4 + 308);
    if ( v5 )
      ModelFrame::FixNames(v5, this[512], 1);
  }
  v9 = -1;
  std::string::~string(v7);
}
