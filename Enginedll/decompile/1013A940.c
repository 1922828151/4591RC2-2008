/*
 * func-name: ?AddActor@World@@QAEPAVActor@@PAV2@@Z
 * func-address: 0x1013a940
 * callers: 0x1004ef90, 0x1004f700, 0x100b2080, 0x1010a6c0, 0x1015c210, 0x1016da50
 * callees: 0x10012a30, 0x10052ae0, 0x100956d0
 */

struct Actor *__thiscall World::AddActor(World *this, struct Actor *a2)
{
  struct Actor *v3; // esi

  if ( !this )
    Error("World::AddActor() You tried to add an actor using a NULL world pointer. It is likely that the calling actor wa"
          "s never added to the world itself");
  v3 = a2;
  (*(void (__thiscall **)(struct Actor *, World *))(*(_DWORD *)a2 + 28))(a2, this);
  if ( (*(unsigned __int8 (__thiscall **)(struct Actor *))(*(_DWORD *)v3 + 40))(v3) )
  {
    a2 = v3;
    sub_10052AE0((_DWORD *)this + 809, (int *)&a2);
  }
  else
  {
    std::vector<Actor *>::push_back((_DWORD *)this + 805, (int *)&a2);
  }
  return v3;
}
