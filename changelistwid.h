#ifndef CHANGELISTWID_H
#define CHANGELISTWID_H


#include <QWidget>
#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QStackedWidget>
#include <QButtonGroup>
#include <QLineEdit>
#include <QTableWidget>
#include <QScrollBar>
#include <QHeaderView>
#include <QListWidget>
#include <QListWidgetItem>
#include <QToolButton>
#include <QDebug>
#include <QSqlQuery>
#include <QFileDialog>
#include <QProgressDialog>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include <QAction>
#include <QMenu>
#include <QSqlTableModel>

class ChangeListWid : public QWidget
{
    Q_OBJECT
public:
    explicit ChangeListWid(QWidget *parent = nullptr);
    void initStack();

private:
    QStackedWidget *mpwid;
    QFrame *titleFrame;
    QVBoxLayout *vMainLayout;
    QVBoxLayout *vListWidLayout;

    QHBoxLayout *hTitleLayout;
    QHBoxLayout *hListTitleLayout;

    QLabel *songListLabel;
    QLabel *songNumberLabel;
    QLabel *nullMusicIconLabel;
    QLabel *nullMusicLabel;

    QPushButton *n_addLocalSong;   //null页面的添加歌曲按钮
    QPushButton *n_addLocalFolder;   //null页面的添加文件夹按钮


};

class MusicListWid :public QWidget
{
    Q_OBJECT
public:
    explicit MusicListWid(QWidget *parent = nullptr);
    void initMusicListWid();
    QListWidget *musicInfoWidget;

    QString getMp3FileName(QString);
//    void contextMenuEvent(QContextMenuEvent *event);     //歌曲列表右键菜单
    QStringList sqlFilenameList;
    QLabel *songNumberLabel;
    QMediaPlaylist *PlayList;
    QMediaPlayer *Music;

    QLabel *songListLabel;
    QToolButton *top_addSongBtn;  //播放列表界面的添加歌曲按钮
    QToolButton *top_playAllSongBtn;  //播放界面的播放全部按钮

    int count = 0;
public slots:
    void on_top_addSongBtn_slot();  //添加歌曲

private:
    QStackedWidget *mpwid;
//    QFrame *titleFrame;
    QVBoxLayout *vMainLayout;
    QVBoxLayout *vListWidLayout;

    QHBoxLayout *hTitleLayout;
    QHBoxLayout *hTitleListLayout;


    QListWidgetItem *testMusicInfo1;
    QListWidgetItem *testMusicInfo2;





    QLabel *songLabel;
    QLabel *singerLabel;
    QLabel *albumLabel;
    QLabel *timeLabel;

};


#endif // CHANGELISTWID_H