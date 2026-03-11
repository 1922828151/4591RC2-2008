/*
 * func-name: sub_1001B360
 * func-address: 0x1001b360
 * callers: 0x1000cdf0
 * callees: 0x100174e0, 0x100194f0, 0x1001b460, 0x1001d830, 0x100295c0
 */

Outpop::Message::Group *__thiscall sub_1001B360(
        void *this,
        Outpop::Utility::Ref_Object **a2,
        Outpop::Utility::Ref_Object **a3)
{
  Outpop::Message::Group *v4; // eax
  Outpop::Message::Group *v5; // edi
  LONG v7; // eax
  _DWORD *v8; // eax
  _DWORD v9[3]; // [esp+10h] [ebp-18h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  v4 = (Outpop::Message::Group *)operator new(0x50u);
  v5 = 0;
  v10 = 0;
  if ( v4 )
    v5 = Outpop::Message::Group::Group(v4);
  v10 = -1;
  if ( !v5 )
    return 0;
  v7 = InterlockedIncrement((volatile LONG *)(*(_DWORD *)(*(_DWORD *)this + 44) + 136));
  if ( v7 == -1 )
    v7 = 1;
  if ( (*((_BYTE *)*a2 + 97) & 0xF) != 0 )
    *(_DWORD *)((*((_BYTE *)*a2 + 97) & 0xF) + *((_DWORD *)*a2 + 25)) = v7;
  v8 = sub_100194F0(v9, (int)v5, a2, a3);
  v10 = 1;
  sub_1001D830(v8);
  v10 = -1;
  sub_1001B460(v9);
  return v5;
}
