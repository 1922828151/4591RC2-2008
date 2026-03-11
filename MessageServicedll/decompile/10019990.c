/*
 * func-name: sub_10019990
 * func-address: 0x10019990
 * callers: none
 * callees: 0x1000dd50, 0x10019630, 0x1001f040
 */

void __thiscall sub_10019990(_DWORD *this, int a2, int a3, int a4, int a5)
{
  Outpop::Utility::Lock *v6; // edi
  char v7; // bl
  Outpop::Utility::Ref_Object **v8; // eax
  Outpop::Utility::Ref_Object **v9; // eax
  int v10; // ecx
  unsigned __int16 v11; // dx
  int v12; // edx
  Outpop::Utility::Ref_Object *v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+20h] [ebp-4h]

  v6 = (Outpop::Utility::Lock *)(this + 15);
  v7 = 0;
  v13 = (Outpop::Utility::Ref_Object *)(this + 15);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 15));
  v14 = 0;
  if ( !this[22] )
  {
    this[22] = 1;
    v7 = 1;
  }
  v14 = -1;
  Outpop::Utility::Lock::unlock(v6);
  if ( v7 )
  {
    v8 = (Outpop::Utility::Ref_Object **)sub_1000DD50();
    v9 = sub_10019630(v8, &v13);
    v14 = 1;
    v10 = this[2];
    v11 = *(_WORD *)(v10 + 96) >> 12;
    if ( v11 )
      v12 = *(unsigned __int16 *)(v11 + *(_DWORD *)(v10 + 100));
    else
      v12 = 0xFFFF;
    Outpop::Message::Handler_Manager::dispatch_message_handler(*(_BYTE *)(*(_DWORD *)(v10 + 100) + 1), v12, v9);
    v14 = -1;
    if ( v13 )
      Outpop::Utility::Ref_Object::release(v13);
  }
}
