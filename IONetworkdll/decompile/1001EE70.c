/*
 * func-name: sub_1001EE70
 * func-address: 0x1001ee70
 * callers: 0x1001de60, 0x1001de90
 * callees: 0x10002600, 0x10002e10, 0x100038e0, 0x1000d890, 0x10020350, 0x10020400, 0x1004e861, 0x1004e98e
 */

int __thiscall sub_1001EE70(int this, const struct Outpop::IONetwork::INET_Addr *a2, Outpop::Utility::Ref_Object **a3)
{
  void *v4; // esi
  int v5; // eax
  int result; // eax
  int v7; // eax
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx
  int v10; // edi
  Outpop::Utility::Ref_Object *v11; // ecx
  Outpop::Utility::Ref_Object *v12; // ecx
  bool v13; // zf
  int v14; // eax
  _DWORD v15[6]; // [esp-1Ch] [ebp-7Ch] BYREF
  Outpop::Utility::Ref_Object *v16; // [esp-4h] [ebp-64h] BYREF
  int vOutBuffer; // [esp+14h] [ebp-4Ch] BYREF
  DWORD cbBytesReturned; // [esp+18h] [ebp-48h] BYREF
  Outpop::Utility::Ref_Object **v19; // [esp+1Ch] [ebp-44h]
  int v20; // [esp+20h] [ebp-40h]
  int vInBuffer; // [esp+24h] [ebp-3Ch] BYREF
  int v22; // [esp+28h] [ebp-38h]
  char v23; // [esp+2Ch] [ebp-34h]
  char v24; // [esp+2Dh] [ebp-33h]
  char v25; // [esp+2Eh] [ebp-32h]
  char v26; // [esp+2Fh] [ebp-31h]
  char v27; // [esp+30h] [ebp-30h]
  char v28; // [esp+31h] [ebp-2Fh]
  char v29; // [esp+32h] [ebp-2Eh]
  char v30; // [esp+33h] [ebp-2Dh]
  _DWORD v31[3]; // [esp+34h] [ebp-2Ch] BYREF
  struct sockaddr name; // [esp+40h] [ebp-20h] BYREF
  int v33; // [esp+5Ch] [ebp-4h]

  v4 = (void *)socket(2, 1, 6);
  if ( v4 == (void *)-1 )
  {
    v5 = sub_1000D890(std::cout, "Soc_Asynch_Connect::open(),soket faild!");
    std::ostream::operator<<(v5, std::endl);
  }
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v31);
  v33 = 0;
  if ( bind((SOCKET)v4, &name, 16) == -1 )
  {
    closesocket((SOCKET)v4);
    result = -1;
    v33 = -1;
    v31[0] = &Outpop::IONetwork::Addr::`vftable';
    return result;
  }
  if ( !CreateIoCompletionPort(v4, **(HANDLE **)this, 0, 0) && GetLastError() != 87 )
    goto LABEL_18;
  v7 = operator new(116);
  v20 = v7;
  LOBYTE(v33) = 2;
  if ( v7 )
  {
    v16 = v8;
    v9 = *(Outpop::Utility::Ref_Object **)(this + 12);
    v19 = &v16;
    v16 = v9;
    if ( v9 )
    {
      Outpop::Utility::Ref_Object::addref(v9);
      v7 = v20;
    }
    LOBYTE(v33) = 2;
    v10 = sub_10020350(v7, v16);
  }
  else
  {
    v10 = 0;
  }
  LOBYTE(v33) = 0;
  v19 = (Outpop::Utility::Ref_Object **)v15;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v15, a2);
  LOBYTE(v33) = 0;
  sub_10020400(v10, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v16);
  *(_DWORD *)(v10 + 108) = v4;
  v11 = *(Outpop::Utility::Ref_Object **)(v10 + 104);
  if ( v11 )
    Outpop::Utility::Ref_Object::release(v11);
  v12 = *a3;
  v13 = *a3 == 0;
  *(_DWORD *)(v10 + 104) = *a3;
  if ( !v13 )
    Outpop::Utility::Ref_Object::addref(v12);
  vOutBuffer = 0;
  vInBuffer = 631375801;
  v22 = 1180753395;
  v23 = -114;
  v24 = -23;
  v25 = 118;
  v26 = -27;
  v27 = -116;
  v28 = 116;
  v29 = 6;
  v30 = 62;
  cbBytesReturned = 0;
  if ( WSAIoctl((SOCKET)v4, 0xC8000006, &vInBuffer, 0x10u, &vOutBuffer, 4u, &cbBytesReturned, 0, 0) == -1 )
  {
    (**(void (__thiscall ***)(int, int))v10)(v10, 1);
LABEL_18:
    closesocket((SOCKET)v4);
LABEL_19:
    v33 = -1;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v31);
    return -1;
  }
  v14 = (*(int (__thiscall **)(const struct Outpop::IONetwork::INET_Addr *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 16))(
          a2,
          *((_DWORD *)a2 + 2),
          0,
          0,
          0,
          v10 + 4);
  if ( !((int (__stdcall *)(void *, int))v22)(v4, v14) && WSAGetLastError() != 997 )
    goto LABEL_19;
  v33 = -1;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v31);
  return 0;
}
