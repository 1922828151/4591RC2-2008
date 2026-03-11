/*
 * func-name: sub_102AB780
 * func-address: 0x102ab780
 * callers: 0x100051a5
 * callees: 0x10002fa4, 0x10013d18, 0x1001816a, 0x100193c1
 */

void __stdcall sub_102AB780(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _WORD *a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // eax
  Event *v12; // ebp
  int v13; // eax
  int v14; // edi
  u_short v15; // bx
  struct BinStream *Stream; // esi
  int v17; // esi
  u_short v18; // [esp+4h] [ebp-40h]
  int v19; // [esp+8h] [ebp-3Ch]
  int v20; // [esp+Ch] [ebp-38h]
  _BYTE v21[28]; // [esp+1Ch] [ebp-28h] BYREF
  int v22; // [esp+40h] [ebp-4h]

  switch ( a5 )
  {
    case 10:
      v11 = EventAttemper::Instance(9, 2020);
      break;
    case 11:
      v11 = EventAttemper::Instance(9, 2021);
      break;
    case 19:
      sub_10013D18(v19, v20);
      sub_10002FA4();
      v11 = EventAttemper::Instance(9, 2022);
      break;
    default:
      return;
  }
  v12 = (Event *)EventAttemper::AddEvent(v11);
  LogPrintf("ConnectError. ErrorCode: %d", a6);
  v13 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)a8 + 16))(a8);
  v14 = std::string::string(v21, v13);
  v18 = a8[7];
  v22 = 0;
  v15 = ntohs(v18);
  Stream = Event::GetStream(v12);
  sub_1001816A(4);
  *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = 1;
  *((_DWORD *)Stream + 2) += 4;
  sub_1001816A(4);
  *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a4;
  *((_DWORD *)Stream + 2) += 4;
  v17 = sub_100193C1(v14);
  sub_1001816A(2);
  *(_WORD *)(*(_DWORD *)(v17 + 4) + *(_DWORD *)(v17 + 8)) = v15;
  *(_DWORD *)(v17 + 8) += 2;
  v22 = -1;
  std::string::~string(v21);
}
