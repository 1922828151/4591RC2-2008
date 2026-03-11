/*
 * func-name: sub_1001AEC0
 * func-address: 0x1001aec0
 * callers: 0x1000cdd0
 * callees: 0x100174e0, 0x1001d8d0, 0x100218b0, 0x100295c0
 */

Outpop::Message::Group *__stdcall sub_1001AEC0(int a1, int a2)
{
  void *v2; // eax
  Outpop::Message::Group *v3; // edi
  void *v5; // [esp+10h] [ebp-1Ch] BYREF
  _BYTE v6[4]; // [esp+14h] [ebp-18h] BYREF
  Outpop::Utility::Ref_Object *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  v2 = operator new(0x50u);
  v5 = v2;
  v8 = 0;
  if ( v2 )
    v3 = Outpop::Message::Group::Group((Outpop::Message::Group *)v2);
  else
    v3 = 0;
  v8 = -1;
  v5 = v3;
  if ( v3 )
  {
    sub_1001D8D0(v6, &v5);
    v8 = 1;
    sub_100218B0();
    v8 = -1;
    if ( v7 )
      Outpop::Utility::Ref_Object::release(v7);
  }
  return v3;
}
