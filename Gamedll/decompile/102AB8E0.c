/*
 * func-name: sub_102AB8E0
 * func-address: 0x102ab8e0
 * callers: 0x10005b0a
 * callees: 0x1001816a, 0x100193c1
 */

void __stdcall sub_102AB8E0(int a1, int a2, int a3, int a4, int a5, int a6, _WORD *a7, int a8, int a9)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  Event *v13; // ebp
  int v14; // eax
  int v15; // edi
  u_short v16; // bx
  struct BinStream *Stream; // esi
  int v18; // esi
  u_short v19; // [esp+14h] [ebp-40h]
  _BYTE v20[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v21; // [esp+50h] [ebp-4h]

  switch ( a5 )
  {
    case 10:
      v12 = EventAttemper::Instance(9, 2010);
      v11 = EventAttemper::AddEvent(v12);
      goto LABEL_8;
    case 11:
      v9 = EventAttemper::Instance(9, 2011);
      EventAttemper::AddEvent(v9);
      goto LABEL_6;
    case 19:
LABEL_6:
      v10 = EventAttemper::Instance(9, 2012);
      v11 = EventAttemper::AddEvent(v10);
LABEL_8:
      v13 = (Event *)v11;
      v14 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)a7 + 16))(a7);
      v15 = std::string::string(v20, v14);
      v19 = a7[7];
      v21 = 0;
      v16 = ntohs(v19);
      Stream = Event::GetStream(v13);
      sub_1001816A(4);
      *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = 1;
      *((_DWORD *)Stream + 2) += 4;
      sub_1001816A(4);
      *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a1;
      *((_DWORD *)Stream + 2) += 4;
      v18 = sub_100193C1(v15);
      sub_1001816A(2);
      *(_WORD *)(*(_DWORD *)(v18 + 4) + *(_DWORD *)(v18 + 8)) = v16;
      *(_DWORD *)(v18 + 8) += 2;
      v21 = -1;
      std::string::~string(v20);
      break;
  }
}
