/*
 * func-name: ?malloc@Sect_Block_Allocator@Utility@Outpop@@QAEPAXI@Z
 * func-address: 0x10002f40
 * callers: 0x1000ea30
 * callees: 0x100023b0, 0x100023e0, 0x10002410, 0x10005380, 0x10005a90, 0x1000cd90, 0x10016850
 */

_BYTE *__thiscall Outpop::Utility::Sect_Block_Allocator::malloc(
        Outpop::Utility::Sect_Block_Allocator *this,
        unsigned int a2)
{
  _BYTE *v2; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  _BYTE *v16; // ebp
  struct _RTL_CRITICAL_SECTION *v17; // ebx
  wchar_t *v18; // edi
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *dt; // eax
  int v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *tm; // [esp-18h] [ebp-38h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-34h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-30h]
  DWORD LastError; // [esp-Ch] [ebp-2Ch]

  if ( a2 >= 0x10 )
  {
    if ( a2 >= 0x20 )
    {
      if ( a2 >= 0x40 )
      {
        if ( a2 >= 0x80 )
        {
          if ( a2 >= 0x100 )
          {
            if ( a2 >= 0x200 )
            {
              if ( a2 >= 0x400 )
              {
                if ( a2 >= 0x800 )
                {
                  if ( a2 >= 0x1000 )
                  {
                    if ( a2 >= 0x2000 )
                    {
                      if ( a2 >= 0x4000 )
                      {
                        if ( a2 >= 0x8000 )
                        {
                          if ( a2 >= 0x10000 )
                          {
                            v16 = malloc(a2 + 1);
                            if ( !v16
                              && (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
                               || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
                              && *((_BYTE *)Outpop::Utility::Logger::instance() + 140) == 1 )
                            {
                              v17 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
                              EnterCriticalSection(v17);
                              Outpop::Utility::Logger::instance();
                              v18 = *(wchar_t **)sub_10005380();
                              v19 = sub_1000CD90(v18, L"\n%s", L"LOG_ERROR");
                              LastError = GetLastError();
                              CurrentThreadId = GetCurrentThreadId();
                              CurrentProcessId = GetCurrentProcessId();
                              v20 = Outpop::Utility::Logger::instance();
                              tm = Outpop::Utility::Logger::make_tm(v20);
                              v21 = Outpop::Utility::Logger::instance();
                              dt = Outpop::Utility::Logger::make_dt(v21);
                              v23 = sub_1000CD90(
                                      &v18[v19],
                                      L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                                      dt,
                                      tm,
                                      CurrentProcessId,
                                      CurrentThreadId,
                                      LastError,
                                      L"d:\\r3\\outpopgameproject\\utility\\Allocator_Manager.h",
                                      279);
                              sub_1000CD90(&v18[v23 + v19], L"Sect_Block_Allocator::malloc  p == NULL");
                              if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
                                wprintf(L"%s", v18);
                              if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
                              {
                                v24 = Outpop::Utility::Logger::instance();
                                Outpop::Utility::Logger::write_file(v24, v18);
                              }
                              LeaveCriticalSection(v17);
                            }
                            *v16 = 13;
                            return v16 + 1;
                          }
                          else
                          {
                            v15 = (_BYTE *)sub_10005A90();
                            *v15 = 12;
                            return v15 + 1;
                          }
                        }
                        else
                        {
                          v14 = (_BYTE *)sub_10005A90();
                          *v14 = 11;
                          return v14 + 1;
                        }
                      }
                      else
                      {
                        v13 = (_BYTE *)sub_10005A90();
                        *v13 = 10;
                        return v13 + 1;
                      }
                    }
                    else
                    {
                      v12 = (_BYTE *)sub_10005A90();
                      *v12 = 9;
                      return v12 + 1;
                    }
                  }
                  else
                  {
                    v11 = (_BYTE *)sub_10005A90();
                    *v11 = 8;
                    return v11 + 1;
                  }
                }
                else
                {
                  v10 = (_BYTE *)sub_10005A90();
                  *v10 = 7;
                  return v10 + 1;
                }
              }
              else
              {
                v9 = (_BYTE *)sub_10005A90();
                *v9 = 6;
                return v9 + 1;
              }
            }
            else
            {
              v8 = (_BYTE *)sub_10005A90();
              *v8 = 5;
              return v8 + 1;
            }
          }
          else
          {
            v7 = (_BYTE *)sub_10005A90();
            *v7 = 4;
            return v7 + 1;
          }
        }
        else
        {
          v6 = (_BYTE *)sub_10005A90();
          *v6 = 3;
          return v6 + 1;
        }
      }
      else
      {
        v5 = (_BYTE *)sub_10005A90();
        *v5 = 2;
        return v5 + 1;
      }
    }
    else
    {
      v4 = (_BYTE *)sub_10005A90();
      *v4 = 1;
      return v4 + 1;
    }
  }
  else
  {
    v2 = (_BYTE *)sub_10005A90();
    *v2 = 0;
    return v2 + 1;
  }
}
