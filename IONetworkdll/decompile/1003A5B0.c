/*
 * func-name: sub_1003A5B0
 * func-address: 0x1003a5b0
 * callers: 0x10038060
 * callees: 0x10003930, 0x10004050, 0x100040d0, 0x10005ae0, 0x10005b00, 0x10007400, 0x10009b30, 0x10035dd0, 0x10038ad0, 0x1003b9c0, 0x1004e861
 */

void __fastcall sub_1003A5B0(int a1, Outpop::Utility::Stream_Base **a2)
{
  int v4; // eax
  Outpop::Utility::Ref_Object *v5; // esi
  int readable; // eax
  Outpop::Utility::Stream_Base *v7; // esi
  const char *ptr; // eax
  char *v9; // eax
  char *v10; // eax
  int *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  Outpop::Utility::Ref_Object *v14; // ecx
  int *v15; // ebx
  int v16; // eax
  int v17; // [esp-Ch] [ebp-94h]
  Outpop::Utility::Ref_Object *v18[2]; // [esp-8h] [ebp-90h] BYREF
  int v19; // [esp+0h] [ebp-88h] BYREF
  _BYTE v20[4]; // [esp+14h] [ebp-74h] BYREF
  Outpop::Utility::Ref_Object **v21; // [esp+18h] [ebp-70h]
  int v22; // [esp+1Ch] [ebp-6Ch]
  Outpop::Utility::Ref_Object *v23; // [esp+20h] [ebp-68h] BYREF
  Outpop::Utility::Ref_Object *v24; // [esp+24h] [ebp-64h] BYREF
  _BYTE v25[4]; // [esp+28h] [ebp-60h] BYREF
  int v26; // [esp+2Ch] [ebp-5Ch]
  _BYTE v27[28]; // [esp+30h] [ebp-58h] BYREF
  _BYTE v28[40]; // [esp+4Ch] [ebp-3Ch] BYREF
  int *v29; // [esp+78h] [ebp-10h]
  int v30; // [esp+84h] [ebp-4h]

  v29 = &v19;
  v22 = a1;
  v30 = 0;
  Outpop::Utility::Stream_Base::move_read_pos(*a2, 1);
  if ( *(_BYTE *)(a1 + 8) )
  {
    v4 = sub_10035DD0((int)*a2, (char *)(a1 + 80));
    sub_10035DD0(v4, (char *)(a1 + 84));
    if ( Outpop::Utility::Stream_Base::get_readable(*a2) )
    {
      v5 = (Outpop::Utility::Ref_Object *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v23 = v5;
      LOBYTE(v30) = 1;
      if ( v5 )
      {
        readable = Outpop::Utility::Stream_Base::get_readable(*a2);
        Outpop::Utility::Binary_Stream::Binary_Stream(v5, readable);
        *(_DWORD *)v5 = &Outpop::Utility::Binary_Stream::`vftable';
        v24 = v5;
      }
      else
      {
        v24 = 0;
        v5 = 0;
      }
      LOBYTE(v30) = 0;
      v23 = v5;
      if ( v5 )
        Outpop::Utility::Ref_Object::addref(v5);
      LOBYTE(v30) = 2;
      v7 = *a2;
      v17 = Outpop::Utility::Stream_Base::get_readable(*a2);
      ptr = Outpop::Utility::Stream_Base::get_read_ptr(v7);
      Outpop::Utility::Stream_Base::write(v24, ptr, v17);
      sub_10005B00((Outpop::Utility::Ref_Object **)(a1 + 104), &v23);
      LOBYTE(v30) = 0;
      if ( v24 )
        Outpop::Utility::Ref_Object::release(v24);
    }
    Outpop::Utility::Stream_Base::reset_all(*a2);
    v9 = Outpop::Utility::Stream_Base::get_write_ptr(*a2);
    *v9 |= 0x80u;
    v10 = Outpop::Utility::Stream_Base::get_write_ptr(*a2);
    *v10 |= 2u;
    Outpop::Utility::Stream_Base::set_write_pos(*a2, 1);
    v11 = sub_10009B30((int *)*a2, (const char *)(a1 + 80));
    sub_10009B30(v11, (const char *)(a1 + 84));
    sub_10005B00((Outpop::Utility::Ref_Object **)(a1 + 88), a2);
    Outpop::IONetwork::Dgram_Connector::asynch_send_to(*(_DWORD **)(a1 + 72), a2, a1 + 40, 0);
    v12 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v20);
    LOBYTE(v30) = 3;
    *(_DWORD *)(a1 + 96) = *v12;
    *(_DWORD *)(a1 + 100) = v12[1];
    LOBYTE(v30) = 0;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v20);
  }
  else
  {
    v13 = sub_10035DD0((int)*a2, (char *)&v24);
    sub_10035DD0(v13, (char *)&v23);
    Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v25);
    LOBYTE(v30) = 4;
    Outpop::IONetwork::INET_Addr::operator=(v28, a1 + 40);
    Outpop::IONetwork::INET_Addr::operator=(v27, a1 + 12);
    v28[36] = 0;
    v26 = 0;
    v18[0] = v14;
    v21 = v18;
    sub_10005AE0((Outpop::Utility::Ref_Object **)(a1 + 104), v18);
    LOBYTE(v30) = 5;
    v15 = *(int **)(a1 + 72);
    v16 = *v15;
    LOBYTE(v30) = 4;
    (*(void (__thiscall **)(int *, _BYTE *, _DWORD, _DWORD))(v16 + 24))(v15, v25, 0, 0);
    LOBYTE(v30) = 0;
    Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v25);
  }
}
