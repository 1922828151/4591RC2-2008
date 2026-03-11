/*
 * func-name: sub_1020AA20
 * func-address: 0x1020aa20
 * callers: 0x10003c2e
 * callees: 0x10005605, 0x102c9d62
 */

void __thiscall sub_1020AA20(void *this, int a2, int a3, Outpop::Utility::Ref_Object **a4)
{
  int v4; // edi
  Outpop::Utility::Binary_Stream *v6; // eax
  Outpop::Utility::Ref_Object *v7; // esi
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx
  Outpop::Utility::Ref_Object *v10; // ecx
  bool v11; // zf
  int *v12; // esi
  int *v13; // edi
  char *v14; // eax
  Outpop::Utility::Ref_Object *v15; // [esp-4h] [ebp-50h] BYREF
  Outpop::Utility::Ref_Object *v16; // [esp+14h] [ebp-38h] BYREF
  int v17; // [esp+18h] [ebp-34h]
  Outpop::Utility::Binary_Stream *v18; // [esp+1Ch] [ebp-30h]
  _BYTE v19[28]; // [esp+20h] [ebp-2Ch] BYREF
  int v20; // [esp+48h] [ebp-4h]

  v4 = a2;
  v17 = a2;
  v6 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v7 = v6;
  v18 = v6;
  v20 = 0;
  if ( v6 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v6, 16);
    *(_DWORD *)v7 = &Outpop::Utility::Binary_Stream::`vftable';
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  v20 = -1;
  v16 = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  v20 = 1;
  sub_10005605((int)&a3);
  v15 = v9;
  v10 = *a4;
  v11 = *a4 == 0;
  v18 = (Outpop::Utility::Binary_Stream *)&v15;
  v15 = v10;
  if ( !v11 )
    Outpop::Utility::Ref_Object::addref(v10);
  Outpop::Utility::Binary_Stream::cont(v16, v15);
  v12 = *(int **)(a2 + 4);
  if ( (unsigned int)v12 > *(_DWORD *)(a2 + 8) )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v13 = *(int **)(v4 + 8);
    if ( *(_DWORD *)(v17 + 4) > (unsigned int)v13 )
      _invalid_parameter_noinfo();
    if ( v12 == v13 )
      break;
    if ( (unsigned int)v12 >= *(_DWORD *)(v17 + 8) )
      _invalid_parameter_noinfo();
    v14 = _itoa(*v12, byte_103B6678, 10);
    std::string::string(v19, v14);
    LOBYTE(v20) = 2;
    if ( (unsigned __int8)Outpop::P2P::Peer::has_peer(this, v19) )
      Outpop::P2P::Peer::send_message(this, v19, &v16);
    else
      Outpop::P2P::Peer::connect_remote_peer(this, v19);
    LOBYTE(v20) = 1;
    std::string::~string(v19);
    if ( (unsigned int)v12 >= *(_DWORD *)(v17 + 8) )
      _invalid_parameter_noinfo();
    v4 = v17;
    ++v12;
  }
  v20 = -1;
  if ( v16 )
    Outpop::Utility::Ref_Object::release(v16);
}
