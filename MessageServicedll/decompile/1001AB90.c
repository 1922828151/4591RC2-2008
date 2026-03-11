/*
 * func-name: sub_1001AB90
 * func-address: 0x1001ab90
 * callers: 0x100052a0
 * callees: 0x10002960, 0x100278e0
 */

_DWORD *__userpurge sub_1001AB90@<eax>(int a1@<ebx>, _DWORD *a2)
{
  _DWORD *v2; // esi
  Outpop::Utility::Lock *v3; // ecx

  v2 = a2;
  v3 = (Outpop::Utility::Lock *)(a2 + 1);
  *a2 = a1;
  Outpop::Utility::Lock::Lock(v3);
  Outpop::Utility::Lock::Lock((Outpop::Utility::Lock *)(v2 + 7));
  sub_100278E0(v2 + 13, &a2);
  sub_100278E0(v2 + 23, &a2);
  v2[34] = &Outpop::Message::Message_Handler::`vftable';
  v2[34] = &Outpop::Message::Synch_Group_Ack_Handler::`vftable';
  v2[35] = a1;
  v2[37] = sub_10002960();
  v2[38] = 0;
  v2[40] = 0;
  v2[41] = 0;
  v2[42] = 0;
  v2[44] = 0;
  v2[45] = 0;
  v2[46] = 0;
  return v2;
}
