/*
 * func-name: sub_1020A970
 * func-address: 0x1020a970
 * callers: 0x10019b78
 * callees: 0x1000e56b, 0x1001041a, 0x102c9d98
 */

void __stdcall sub_1020A970(int a1, int a2)
{
  Outpop::Utility::Ref_Object *v2; // eax
  int v3; // ecx
  int v4; // [esp+0h] [ebp-18h]
  Outpop::Utility::Ref_Object *v5; // [esp+4h] [ebp-14h] BYREF
  void *v6; // [esp+8h] [ebp-10h]
  int v7; // [esp+14h] [ebp-4h]

  v6 = operator new(0xCu);
  v7 = 0;
  if ( v6 )
    v2 = (Outpop::Utility::Ref_Object *)sub_1001041A(a2);
  else
    v2 = 0;
  v7 = -1;
  v5 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  v7 = 1;
  v3 = *(_DWORD *)sub_1000E56B(v4, (int)v5);
  if ( v3 )
    (*(void (__thiscall **)(int, Outpop::Utility::Ref_Object **))(*(_DWORD *)v3 + 8))(v3, &v5);
  v7 = -1;
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
}
