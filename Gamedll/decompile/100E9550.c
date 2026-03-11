/*
 * func-name: ??1SoundMgr@@UAE@XZ_0
 * func-address: 0x100e9550
 * callers: 0x1000e890
 * callees: 0x102c9d50
 */

void __thiscall SoundMgr::~SoundMgr(SoundMgr *this)
{
  _DWORD **v2; // ecx
  _DWORD *v3; // eax
  bool v4; // zf
  _DWORD *v5; // edi
  _DWORD **v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  struct Sound **i; // ebx
  _DWORD **v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // ebx
  _DWORD **v13; // ecx
  _DWORD *v14; // eax
  _DWORD *v15; // ebx
  _DWORD **v16; // ecx
  _DWORD *v17; // eax
  _DWORD *v18; // edi
  _DWORD **v19; // ecx
  _DWORD *v20; // eax
  _DWORD *v21; // edi

  *(_DWORD *)this = &SoundMgr::`vftable';
  v2 = (_DWORD **)*((_DWORD *)this + 2);
  v3 = *v2;
  *v2 = v2;
  *(_DWORD *)(*((_DWORD *)this + 2) + 4) = *((_DWORD *)this + 2);
  v4 = v3 == *((_DWORD **)this + 2);
  *((_DWORD *)this + 3) = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v3;
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != *((_DWORD **)this + 2) );
  }
  v6 = (_DWORD **)*((_DWORD *)this + 5);
  v7 = *v6;
  *v6 = v6;
  *(_DWORD *)(*((_DWORD *)this + 5) + 4) = *((_DWORD *)this + 5);
  v4 = v7 == *((_DWORD **)this + 5);
  *((_DWORD *)this + 6) = 0;
  if ( !v4 )
  {
    do
    {
      v8 = (_DWORD *)*v7;
      operator delete(v7);
      v7 = v8;
    }
    while ( v8 != *((_DWORD **)this + 5) );
  }
  for ( i = (struct Sound **)**((_DWORD **)this + 8); i != *((struct Sound ***)this + 8); i = (struct Sound **)*i )
  {
    Precacher::PurgeSound(i + 2);
    if ( i == *((struct Sound ***)this + 8) )
      _invalid_parameter_noinfo();
  }
  v10 = (_DWORD **)*((_DWORD *)this + 8);
  v11 = *v10;
  *v10 = v10;
  *(_DWORD *)(*((_DWORD *)this + 8) + 4) = *((_DWORD *)this + 8);
  v4 = v11 == *((_DWORD **)this + 8);
  *((_DWORD *)this + 9) = 0;
  if ( !v4 )
  {
    do
    {
      v12 = (_DWORD *)*v11;
      operator delete(v11);
      v11 = v12;
    }
    while ( v12 != *((_DWORD **)this + 8) );
  }
  v13 = (_DWORD **)*((_DWORD *)this + 8);
  v14 = *v13;
  *v13 = v13;
  *(_DWORD *)(*((_DWORD *)this + 8) + 4) = *((_DWORD *)this + 8);
  v4 = v14 == *((_DWORD **)this + 8);
  *((_DWORD *)this + 9) = 0;
  if ( !v4 )
  {
    do
    {
      v15 = (_DWORD *)*v14;
      operator delete(v14);
      v14 = v15;
    }
    while ( v15 != *((_DWORD **)this + 8) );
  }
  operator delete(*((void **)this + 8));
  *((_DWORD *)this + 8) = 0;
  v16 = (_DWORD **)*((_DWORD *)this + 5);
  v17 = *v16;
  *v16 = v16;
  *(_DWORD *)(*((_DWORD *)this + 5) + 4) = *((_DWORD *)this + 5);
  v4 = v17 == *((_DWORD **)this + 5);
  *((_DWORD *)this + 6) = 0;
  if ( !v4 )
  {
    do
    {
      v18 = (_DWORD *)*v17;
      operator delete(v17);
      v17 = v18;
    }
    while ( v18 != *((_DWORD **)this + 5) );
  }
  operator delete(*((void **)this + 5));
  *((_DWORD *)this + 5) = 0;
  v19 = (_DWORD **)*((_DWORD *)this + 2);
  v20 = *v19;
  *v19 = v19;
  *(_DWORD *)(*((_DWORD *)this + 2) + 4) = *((_DWORD *)this + 2);
  v4 = v20 == *((_DWORD **)this + 2);
  *((_DWORD *)this + 3) = 0;
  if ( !v4 )
  {
    do
    {
      v21 = (_DWORD *)*v20;
      operator delete(v20);
      v20 = v21;
    }
    while ( v21 != *((_DWORD **)this + 2) );
  }
  operator delete(*((void **)this + 2));
  *((_DWORD *)this + 2) = 0;
}
