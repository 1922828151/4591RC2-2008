/*
 * func-name: ?RunPhysics@World@@QAEXPAVActor@@@Z
 * func-address: 0x101404f0
 * callers: 0x1004d7e0, 0x100df7d0
 * callees: 0x1007ec70, 0x10140d40, 0x10140e30, 0x10143fd0
 */

void __thiscall World::RunPhysics(World *this, struct Actor *a2)
{
  double v2; // st7
  NxPhysics *v3; // eax
  NxPhysics *v4; // eax
  struct NxActor *v5; // [esp-8h] [ebp-Ch]
  struct NxActor *v6; // [esp-8h] [ebp-Ch]

  if ( a2 && *((_DWORD *)a2 + 155) )
  {
    if ( (*(unsigned __int16 (__thiscall **)(_DWORD))(**((_DWORD **)a2 + 155) + 88))(*((_DWORD *)a2 + 155)) == 5 )
    {
      if ( *((_BYTE *)a2 + 724) )
        v2 = 0.0;
      else
        v2 = 1.0;
      *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a2 + 155) + 4) + 12) + 4) = v2;
    }
    if ( *((_BYTE *)Editor::Instance() + 2056) )
    {
      v5 = (struct NxActor *)*((_DWORD *)a2 + 155);
      v3 = NxPhysics::Instance();
      NxPhysics::SetLocation(v3, v5, (struct Actor *)((char *)a2 + 856));
      v6 = (struct NxActor *)*((_DWORD *)a2 + 155);
      v4 = NxPhysics::Instance();
      NxPhysics::SetRotation(v4, v6, (struct Actor *)((char *)a2 + 868));
    }
  }
}
