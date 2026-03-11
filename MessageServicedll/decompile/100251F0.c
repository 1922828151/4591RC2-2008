/*
 * func-name: ??1Request_Ack@Message@Outpop@@UAE@XZ
 * func-address: 0x100251f0
 * callers: 0x10004a50
 * callees: 0x10006f70, 0x1000b280, 0x100294f2
 */

void __thiscall Outpop::Message::Request_Ack::~Request_Ack(Outpop::Message::Request_Ack *this)
{
  _DWORD *v2; // esi
  char *v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  _DWORD *i; // ebx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int v7; // eax
  _DWORD **v8; // ecx
  _DWORD *v9; // eax
  bool v10; // zf
  _DWORD *v11; // ebx
  _DWORD **v12; // ecx
  _DWORD *v13; // eax
  _DWORD *v14; // esi

  *(_DWORD *)this = &Outpop::Message::Request_Ack::`vftable';
  v2 = (_DWORD *)**((_DWORD **)this + 36);
  v3 = (char *)this + 140;
  while ( v2 != *((_DWORD **)v3 + 1) )
  {
    v4 = (void (__thiscall ***)(_DWORD, int))v2[2];
    if ( v4 )
      (**v4)(v4, 1);
    if ( v2 == *((_DWORD **)v3 + 1) )
      invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
  for ( i = (_DWORD *)**((_DWORD **)this + 39); i != *((_DWORD **)this + 39); i = (_DWORD *)*i )
  {
    v6 = (void (__thiscall ***)(_DWORD, int))i[2];
    if ( v6 )
      (**v6)(v6, 1);
    if ( i == *((_DWORD **)this + 39) )
      invalid_parameter_noinfo();
  }
  v7 = *((_DWORD *)this + 43);
  if ( v7 )
  {
    sub_1000B280(v7, *((_DWORD *)this + 44));
    operator delete(*((void **)this + 43));
  }
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  v8 = (_DWORD **)*((_DWORD *)this + 39);
  v9 = *v8;
  *v8 = v8;
  *(_DWORD *)(*((_DWORD *)this + 39) + 4) = *((_DWORD *)this + 39);
  v10 = v9 == *((_DWORD **)this + 39);
  *((_DWORD *)this + 40) = 0;
  if ( !v10 )
  {
    do
    {
      v11 = (_DWORD *)*v9;
      operator delete(v9);
      v9 = v11;
    }
    while ( v11 != *((_DWORD **)this + 39) );
  }
  operator delete(*((void **)this + 39));
  *((_DWORD *)this + 39) = 0;
  v12 = (_DWORD **)*((_DWORD *)v3 + 1);
  v13 = *v12;
  *v12 = v12;
  *(_DWORD *)(*((_DWORD *)v3 + 1) + 4) = *((_DWORD *)v3 + 1);
  v10 = v13 == *((_DWORD **)v3 + 1);
  *((_DWORD *)v3 + 2) = 0;
  if ( !v10 )
  {
    do
    {
      v14 = (_DWORD *)*v13;
      operator delete(v13);
      v13 = v14;
    }
    while ( v14 != *((_DWORD **)v3 + 1) );
  }
  operator delete(*((void **)v3 + 1));
  *((_DWORD *)v3 + 1) = 0;
  Outpop::Utility::Lock::~Lock((Outpop::Message::Request_Ack *)((char *)this + 112));
  Outpop::Utility::Lock::~Lock((Outpop::Message::Request_Ack *)((char *)this + 88));
  sub_10006F70((int)this + 48);
  sub_10006F70((int)this + 8);
}
