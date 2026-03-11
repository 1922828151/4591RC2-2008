/*
 * func-name: sub_1001AE60
 * func-address: 0x1001ae60
 * callers: 0x1000cce0, 0x1001a870, 0x1001af80, 0x1001b4d0, 0x1001b880
 * callees: 0x10020fa0
 */

void __userpurge sub_1001AE60(int a1@<eax>, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // edi

  v3 = **(_DWORD ***)(a1 + 8);
  v4 = a1 + 4;
  while ( v3 != *(_DWORD **)(v4 + 4) )
  {
    Outpop::Message::Message_Sender::send(v3[2], a3);
    if ( v3 == *(_DWORD **)(v4 + 4) )
      invalid_parameter_noinfo();
    v3 = (_DWORD *)*v3;
  }
}
