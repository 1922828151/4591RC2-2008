/*
 * func-name: ?SetTechnique@Shader@@QAEXQBD@Z
 * func-address: 0x101206e0
 * callers: 0x10018780, 0x100569f0, 0x10059880, 0x100678c0, 0x100a0810, 0x100e5360, 0x100f1010, 0x101077c0, 0x101282d0, 0x10128c50, 0x1012c590, 0x1012cad0, 0x1012d660, 0x1012e2b0, 0x10139150
 * callees: 0x100956d0
 */

void __userpurge Shader::SetTechnique(Shader *this@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, const char *a5)
{
  int v6; // eax
  int v7; // edi
  int i; // ebx
  bool v9; // zf
  _BYTE v10[12]; // [esp+Ch] [ebp-18h] BYREF
  const char *v11; // [esp+18h] [ebp-Ch]
  int v12; // [esp+20h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+24h] [ebp+0h] BYREF

  if ( a5 )
  {
    v6 = *((_DWORD *)this + 4);
    if ( v6 )
    {
      *((_DWORD *)this + 5) = a5;
      if ( (*(int (__stdcall **)(int, const char *, _BYTE *, int, int, int))(*(_DWORD *)v6 + 20))(
             v6,
             a5,
             v10,
             a4,
             a3,
             a2) < 0 )
        Error("GetTechniqueDesc failed! Handle is %x", *((_DWORD *)this + 5));
      else
        std::string::operator=((char *)this + 24, v11);
      v7 = 0;
      for ( i = 0; i < 10; ++i )
      {
        if ( v7 <= 10 )
        {
          if ( (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 4) + 232))(
                 *((_DWORD *)this + 4),
                 *((_DWORD *)this + 5)) >= 0 )
            break;
          ++v7;
          Sleep(0x64u);
        }
        else
        {
          Error("SetTechnique failed for '%s' (Handle %d)", v11, *((_DWORD *)this + 5));
        }
      }
      (*(void (__cdecl **)(_DWORD, _DWORD, _UNKNOWN **))(**((_DWORD **)this + 4) + 20))(
        *((_DWORD *)this + 4),
        *((_DWORD *)this + 5),
        &retaddr);
      v9 = v12 == 0;
      *((_BYTE *)this + 244) = 0;
      if ( !v9 )
      {
        if ( (*(int (__stdcall **)(_DWORD, _DWORD, const char *))(**((_DWORD **)this + 4) + 76))(
               *((_DWORD *)this + 4),
               *((_DWORD *)this + 5),
               "OverrideEngineMultipass") )
        {
          *((_BYTE *)this + 244) = 1;
        }
      }
    }
  }
}
