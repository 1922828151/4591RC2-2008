/*
 * func-name: sub_1020BD10
 * func-address: 0x1020bd10
 * callers: 0x1001640f
 * callees: 0x100052b8, 0x1001816a, 0x1020a870, 0x102c9d62, 0x102ca13e
 */

char __thiscall sub_1020BD10(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  Outpop::Utility::Stream_Base *v4; // esi
  Event *v5; // ebx
  size_t readable; // edi
  struct BinStream *Stream; // esi
  int v9; // [esp+8h] [ebp-64h] BYREF
  int v10; // [esp+18h] [ebp-54h] BYREF
  void *Src; // [esp+1Ch] [ebp-50h]
  _BYTE v12[28]; // [esp+20h] [ebp-4Ch] BYREF
  _BYTE v13[28]; // [esp+3Ch] [ebp-30h] BYREF
  int *v14; // [esp+5Ch] [ebp-10h]
  int v15; // [esp+68h] [ebp-4h]

  v14 = &v9;
  v10 = 0;
  std::string::string(v13);
  v15 = 0;
  std::string::string(v12);
  LOBYTE(v15) = 2;
  sub_100052B8((int)&v10);
  v15 = 1;
  if ( (_WORD)v10 == 21210 )
    v2 = EventAttemper::Instance(21, 21210);
  else
    v2 = EventAttemper::Instance(9, v10);
  v3 = EventAttemper::AddEvent(v2);
  v4 = (Outpop::Utility::Stream_Base *)this[2];
  v5 = (Event *)v3;
  readable = Outpop::Utility::Stream_Base::get_readable(v4);
  Src = Outpop::Utility::Stream_Base::get_read_ptr(v4);
  Stream = Event::GetStream(v5);
  sub_1001816A(readable);
  memcpy((void *)(*((_DWORD *)Stream + 2) + *((_DWORD *)Stream + 1)), Src, readable);
  *((_DWORD *)Stream + 2) += readable;
  LOBYTE(v15) = 0;
  std::string::~string(v12);
  v15 = -1;
  std::string::~string(v13);
  return 1;
}
