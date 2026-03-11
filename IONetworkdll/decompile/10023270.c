/*
 * func-name: ?conminute_stream@Comminute_Container@IONetwork@Outpop@@QAEXV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10023270
 * callers: 0x1002d330, 0x1002e210, 0x10042eb0, 0x10043720
 * callees: 0x10009930, 0x10009a30
 */

void __thiscall Outpop::IONetwork::Comminute_Container::conminute_stream(
        volatile signed __int16 *this,
        Outpop::Utility::Stream_Base *a2)
{
  int v3; // ebx
  volatile signed __int16 *v4; // esi
  char v5; // al
  Outpop::Utility::Ref_Object *v6; // edi
  int v7; // esi
  char *v8; // eax
  Outpop::Utility::Ref_Object *v9; // edi
  int v10; // ebp
  int readable; // eax
  Outpop::Utility::Stream_Base *v12; // ecx
  Outpop::Utility::Stream_Base *v13; // ebx
  char *ptr; // eax
  int *v15; // eax
  Outpop::Utility::Ref_Object *v16; // esi
  int *v17; // eax
  Outpop::Utility::Stream_Base *v18; // edi
  void (__thiscall **v19)(Outpop::Utility::Stream_Base *, unsigned int); // esi
  unsigned int size; // eax
  const char *v21[5]; // [esp+0h] [ebp-38h] BYREF
  char v22; // [esp+15h] [ebp-23h] BYREF
  char v23; // [esp+16h] [ebp-22h]
  char v24; // [esp+17h] [ebp-21h] BYREF
  Outpop::Utility::Ref_Object *v25; // [esp+18h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object *v26; // [esp+1Ch] [ebp-1Ch]
  volatile signed __int16 *v27; // [esp+20h] [ebp-18h]
  char *v28; // [esp+24h] [ebp-14h]
  const char **v29; // [esp+28h] [ebp-10h]
  int v30; // [esp+34h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+38h] [ebp+0h]

  v30 = 0;
  if ( (int)Outpop::Utility::Stream_Base::get_readable(a2) <= 65400 )
  {
    if ( (int)Outpop::Utility::Stream_Base::get_space(a2) <= 1 )
    {
      v18 = a2;
      v19 = (void (__thiscall **)(Outpop::Utility::Stream_Base *, unsigned int))(*(_DWORD *)a2 + 16);
      size = Outpop::Utility::Stream_Base::get_size(a2);
      (*v19)(v18, size + 32);
    }
    v24 = 0;
    Outpop::Utility::Stream_Base::write(a2, &v24, 1);
  }
  else
  {
    v3 = Outpop::Utility::Stream_Base::get_readable(a2) / 65400;
    if ( Outpop::Utility::Stream_Base::get_readable(a2) % 65400 )
      ++v3;
    v4 = this + 20;
    v5 = 16 * v3;
    v22 = 1;
    v23 = 16 * v3;
    v27 = v4;
    _InterlockedExchangeAdd16(v4, 1u);
    v6 = a2;
    v24 = 0;
    v25 = a2;
    if ( a2 )
    {
      Outpop::Utility::Ref_Object::addref(a2);
      v5 = v23;
    }
    LOBYTE(v30) = 1;
    if ( v3 > 1 )
    {
      v7 = 65400;
      v26 = (Outpop::Utility::Ref_Object *)(v3 - 1);
      do
      {
        ++v22;
        v8 = (char *)Outpop::Utility::Binary_Stream::operator new(0x48u);
        v9 = (Outpop::Utility::Ref_Object *)v8;
        v28 = v8;
        LOBYTE(v30) = 2;
        if ( v8 )
        {
          Outpop::Utility::Binary_Stream::Binary_Stream((Outpop::Utility::Binary_Stream *)v8, 65500);
          *(_DWORD *)v9 = &Outpop::Utility::Binary_Stream::`vftable';
        }
        else
        {
          v9 = 0;
        }
        LOBYTE(v30) = 1;
        v29 = (const char **)v9;
        if ( v9 )
          Outpop::Utility::Ref_Object::addref(v9);
        LOBYTE(v30) = 3;
        Outpop::Utility::Binary_Stream::set_all_protepoty(v9, &a2);
        v10 = v7 + 65400;
        readable = Outpop::Utility::Stream_Base::get_readable(a2);
        v12 = a2;
        if ( v7 + 65400 > readable )
        {
          v13 = a2;
          Outpop::Utility::Stream_Base::get_readable(a2);
          v12 = v13;
        }
        ptr = Outpop::Utility::Stream_Base::get_read_ptr(v12);
        Outpop::Utility::Stream_Base::write(v9, &ptr[v7], v21[1]);
        v21[0] = (char *)&v25 + 3;
        HIBYTE(v25) = BYTE1(v25) | BYTE2(v25);
        v15 = sub_10009A30((int *)v9, v28);
        sub_10009930(v15, v21[0]);
        v29 = v21;
        v21[0] = (const char *)v9;
        if ( v9 )
          Outpop::Utility::Ref_Object::addref(v9);
        LOBYTE(retaddr) = 3;
        v16 = v26;
        Outpop::Utility::Binary_Stream::cont(v26, v21[0]);
        if ( v16 )
          Outpop::Utility::Ref_Object::release(v16);
        v25 = v9;
        if ( v9 )
          Outpop::Utility::Ref_Object::addref(v9);
        v7 = v10;
        LOBYTE(v30) = 1;
        if ( v9 )
          Outpop::Utility::Ref_Object::release(v9);
        v26 = (Outpop::Utility::Ref_Object *)((char *)v26 - 1);
      }
      while ( v26 );
      v5 = v23;
      v6 = v25;
      v4 = v27;
    }
    v22 = v5 | 1;
    Outpop::Utility::Stream_Base::set_write_pos(a2, 65400);
    v17 = sub_10009A30((int *)a2, (const char *)v4);
    sub_10009930(v17, &v22);
    LOBYTE(v30) = 0;
    if ( v6 )
      Outpop::Utility::Ref_Object::release(v6);
  }
  v30 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
}
