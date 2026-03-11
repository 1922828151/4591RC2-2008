/*
 * func-name: ?SelectActor@Editor@@QAEXPAVActor@@@Z
 * func-address: 0x10084120
 * callers: 0x100542a0, 0x1008c3e0
 * callees: 0x10012a30
 */

void __thiscall Editor::SelectActor(Editor *this, struct Actor *a2)
{
  struct Actor *v2; // esi

  v2 = a2;
  if ( *((_BYTE *)a2 + 442) )
  {
    if ( !*((_BYTE *)a2 + 441) )
    {
      *((_BYTE *)this + 2060) = 1;
      std::vector<Actor *>::push_back((_DWORD *)this + 561, (int *)&a2);
    }
    *((_BYTE *)v2 + 441) = 1;
  }
}
