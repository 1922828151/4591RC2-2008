/*
 * func-name: ?Tick@Effect_DynamicLasers@@UAEXXZ_0
 * func-address: 0x1007fa00
 * callers: 0x1000584e
 * callees: 0x10005646, 0x1000bbb3, 0x1000f82b
 */

void __thiscall Effect_DynamicLasers::Tick(Effect_DynamicLasers *this)
{
  DynamicLasers *v2; // ebp
  _DWORD *v3; // ebx
  int *v4; // edi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  float v8; // [esp+8h] [ebp-34h]

  v2 = (DynamicLasers *)*((_DWORD *)this + 263);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 1064) )
    {
      v3 = (_DWORD *)((char *)this + 1160);
      v4 = (int *)((char *)this + 856);
      v8 = GDeltaTime + *((float *)this + 293);
      *((float *)this + 293) = v8;
      if ( (unsigned __int8)sub_1000BBB3((int)this + 1160) )
      {
        if ( *((float *)this + 287) / (double)*((unsigned int *)this + 286) < v8 )
        {
          DynamicLasers::AddNode(v2, (Effect_DynamicLasers *)((char *)this + 856), 0, 0);
          v5 = *v4;
          *((float *)this + 293) = 0.0;
          v6 = *((_DWORD *)this + 215);
          v7 = *((_DWORD *)this + 216);
          *v3 = v5;
          *((_DWORD *)this + 291) = v6;
          *((_DWORD *)this + 292) = v7;
        }
      }
      *((_DWORD *)v2 + 57) = sub_10005646();
    }
    Effect_Base::Tick(this);
  }
  else
  {
    Effect_Base::Tick(this);
  }
}
