#ifndef LEAVEDATA_H
#define LEAVEDATA_H

#include <QObject>
struct LeaveData
{
    int m_index;
    QString m_name;
    int m_class;
    QString m_id;
    QString m_leaveType;
    QString m_leaveReason;
    QString m_timeBegin;
    QString m_timeEnd;
    bool m_isSchool;
    int m_status;
};

#endif // LEAVEDATA_H
