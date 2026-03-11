/*
 * func-name: ?onTrigger@PhysicsTriggerReport@@UAEXAAVNxShape@@0W4NxShapeFlag@@@Z
 * func-address: 0x101477b0
 * callers: none
 * callees: 0x10143df0, 0x10143fd0
 */

void __stdcall PhysicsTriggerReport::onTrigger(int a1, int a2, char a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  NxPhysics *v8; // eax
  NxPhysics *v9; // eax
  int v10; // [esp+8h] [ebp-Ch] BYREF
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v3 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1) + 4);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  v5 = *(_DWORD *)(v3 + 12);
  v6 = *(_DWORD *)(v4 + 4);
  v7 = *(_DWORD *)(v5 + 4);
  if ( v7 )
  {
    if ( (a3 & 1) != 0 )
    {
      if ( v6 )
        v12 = *(_DWORD *)(v6 + 4);
      else
        v12 = -1;
      v11 = v7;
      v10 = 1;
      v8 = NxPhysics::Instance();
      NxPhysics::AddCallbackTrigger(v8, (const struct Stack_Callback_Trigger *)&v10);
    }
    if ( (a3 & 2) != 0 )
    {
      if ( v6 )
        v12 = *(_DWORD *)(v6 + 4);
      else
        v12 = -1;
      v11 = *(_DWORD *)(v5 + 4);
      v10 = 2;
      v9 = NxPhysics::Instance();
      NxPhysics::AddCallbackTrigger(v9, (const struct Stack_Callback_Trigger *)&v10);
    }
  }
}
