/*
 * func-name: sub_1002AD90
 * func-address: 0x1002ad90
 * callers: 0x10027c50
 * callees: 0x10003930, 0x10004050, 0x100040d0, 0x10005ae0, 0x10005b00, 0x10007400, 0x10009b30, 0x100279d0, 0x1002bf40, 0x10035dd0, 0x1004e861
 */

void __fastcall sub_1002AD90(int a1, Outpop::Utility::Stream_Base **a2)
{
  Outpop::Utility::Ref_Object *v4; // esi
  int readable; // eax
  Outpop::Utility::Stream_Base *v6; // esi
  const char *ptr; // eax
  char *v8; // eax
  char *v9; // eax
  int *v10; // eax
  _DWORD *v11; // eax
  Outpop::Utility::Ref_Object *v12; // ecx
  int *v13; // ebx
  int v14; // eax
  int v15; // [esp-Ch] [ebp-94h]
  Outpop::Utility::Ref_Object *v16[2]; // [esp-8h] [ebp-90h] BYREF
  int v17; // [esp+0h] [ebp-88h] BYREF
  _BYTE v18[4]; // [esp+14h] [ebp-74h] BYREF
  Outpop::Utility::Ref_Object **v19; // [esp+18h] [ebp-70h]
  int v20; // [esp+1Ch] [ebp-6Ch]
  Outpop::Utility::Ref_Object *v21; // [esp+20h] [ebp-68h] BYREF
  Outpop::Utility::Ref_Object *v22; // [esp+24h] [ebp-64h] BYREF
  _BYTE v23[4]; // [esp+28h] [ebp-60h] BYREF
  int v24; // [esp+2Ch] [ebp-5Ch]
  _BYTE v25[28]; // [esp+30h] [ebp-58h] BYREF
  _BYTE v26[40]; // [esp+4Ch] [ebp-3Ch] BYREF
  int *v27; // [esp+78h] [ebp-10h]
  int v28; // [esp+84h] [ebp-4h]

  v27 = &v17;
  v20 = a1;
  v28 = 0;
  Outpop::Utility::Stream_Base::move_read_pos(*a2, 1);
  if ( *(_BYTE *)(a1 + 8) )
  {
    sub_10035DD0(a1 + 80);
    sub_10035DD0(a1 + 84);
    if ( Outpop::Utility::Stream_Base::get_readable(*a2) )
    {
      v4 = (Outpop::Utility::Ref_Object *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v21 = v4;
      LOBYTE(v28) = 1;
      if ( v4 )
      {
        readable = Outpop::Utility::Stream_Base::get_readable(*a2);
        Outpop::Utility::Binary_Stream::Binary_Stream(v4, readable);
        *(_DWORD *)v4 = &Outpop::Utility::Binary_Stream::`vftable';
        v22 = v4;
      }
      else
      {
        v22 = 0;
        v4 = 0;
      }
      LOBYTE(v28) = 0;
      v21 = v4;
      if ( v4 )
        Outpop::Utility::Ref_Object::addref(v4);
      LOBYTE(v28) = 2;
      v6 = *a2;
      v15 = Outpop::Utility::Stream_Base::get_readable(*a2);
      ptr = Outpop::Utility::Stream_Base::get_read_ptr(v6);
      Outpop::Utility::Stream_Base::write(v22, ptr, v15);
      sub_10005B00((Outpop::Utility::Ref_Object **)(a1 + 104), &v21);
      LOBYTE(v28) = 0;
      if ( v22 )
        Outpop::Utility::Ref_Object::release(v22);
    }
    Outpop::Utility::Stream_Base::reset_all(*a2);
    v8 = Outpop::Utility::Stream_Base::get_write_ptr(*a2);
    *v8 |= 0x80u;
    v9 = Outpop::Utility::Stream_Base::get_write_ptr(*a2);
    *v9 |= 2u;
    Outpop::Utility::Stream_Base::set_write_pos(*a2, 1);
    v10 = sub_10009B30((int *)*a2, (const char *)(a1 + 80));
    sub_10009B30(v10, (const char *)(a1 + 84));
    sub_10005B00((Outpop::Utility::Ref_Object **)(a1 + 88), a2);
    Outpop::IONetwork::Dgram_Acceptor::asynch_send_to(*(_DWORD **)(a1 + 72), a2, a1 + 40, 0);
    v11 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v18);
    LOBYTE(v28) = 3;
    *(_DWORD *)(a1 + 96) = *v11;
    *(_DWORD *)(a1 + 100) = v11[1];
    LOBYTE(v28) = 0;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v18);
  }
  else
  {
    sub_10035DD0(&v22);
    sub_10035DD0(&v21);
    Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v23);
    LOBYTE(v28) = 4;
    Outpop::IONetwork::INET_Addr::operator=(v26, a1 + 40);
    Outpop::IONetwork::INET_Addr::operator=(v25, a1 + 12);
    v26[36] = 0;
    v24 = 0;
    v16[0] = v12;
    v19 = v16;
    sub_10005AE0((Outpop::Utility::Ref_Object **)(a1 + 104), v16);
    LOBYTE(v28) = 5;
    v13 = *(int **)(a1 + 72);
    v14 = *v13;
    LOBYTE(v28) = 4;
    (*(void (__thiscall **)(int *, _BYTE *, _DWORD, _DWORD))(v14 + 20))(v13, v23, 0, 0);
    LOBYTE(v28) = 0;
    Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v23);
  }
}
