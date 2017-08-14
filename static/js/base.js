// if( location.hostname.indexOf('wabei.cn')==-1 ){
// 	location.href='http://www.wabei.cn';
// }

$(function () {
    // timeline
    var $timeline = $('.sidebar-model-timeline');
    if ($timeline.length) {
        $timeline.find('.list-scroll').mCustomScrollbar({
            theme: "minimal-dark",
            scrollInertia: 200
        });
    }
});
$('.slider').mouseover(function(){
    $('.slider_tab').show();
})
$('.slider').mouseleave(function(){
    $('.slider_tab').hide();
})
$(function () {
    // index slider
    var $slider = $('#slider');
    if ($slider.length) {

        var $dots = $('.dot', $slider);
        var $items = $('.item', $slider);
        var timer = null;
        var duration = 5000;
        var currentIndex = 0;
        var index = 1;
        $('#left_tab').click(function(){
            if (index == 4) {
                index = 1;
            } else {
                index += 1;
            }
            showButton();
            animate(index-1);
        })
        $('#right_tab').click(function(){
            if (index == 1) {
                index = 4;
            }else {
                index -= 1;
            }
            showButton();
            animate(index-1);
        })
        function showButton(){
            for (var i = 0; i < $dots.length; i++) {
                if ($('.ddot').hasClass('dot-current')) {
                    $('.ddot').removeClass('dot-current');
                    break;
                }  
            }
        }
        $dots.click(function () {
            var index = $(this).index();
            animate(index);
        });

        // $slider.mouseenter(function () {
        //     clearTimeout(timer);
        // }).mouseleave(function () {
        //     interval();
        // });
        function animate(index) {
            if (index === currentIndex)return;

            $items.eq(currentIndex).stop().animate({
                opacity: 0
            }, 600);

            $items.eq(index).stop().animate({
                opacity: 1
            }, 600);
            currentIndex = index;
            $dots.removeClass('dot-current').eq(currentIndex).addClass('dot-current');
            $items.removeClass('item-current').eq(currentIndex).addClass('item-current');
        }
        // function interval() {
        //     timer=setTimeout(function(){
        //         var index = currentIndex === $items.length - 1 ? 0 : currentIndex + 1;
        //         animate(index);
        //     }, duration);
        // }
        // interval();
    }
});


$(function () {
   //
    var $loading=$('.section-news-list-loading');
    var urlEncode=window.encodeURIComponent;
    if ($loading.length) {

        $loading.click(function(){
            var items=window.pageInfo.splice(0,20);
            var chip=[];
            $(items).each(function(index,item){
                chip.push( renderItem(item) );
            });
            $('.section-news-list').append( chip.join("\r\n") );
            if( window.pageInfo.length===0 ){
                $loading.hide();
            }
            try{ this.blur(); }catch(e){}
        });

        function renderItem( item ){
            var tags=[];
            $.each(item.tags,function(index,tag){
                tags.push( '       <a href="/tag/'+tag.tagid+'/" class="tag">'+tag.tag+'</a>' );
            });
            var item=[
                '<div class="item-subject item-subject-hot">',
                (item.thumb?'   <a href="'+item.url+'" class="img"><img src="'+item.thumb+'" alt="'+item.title+'"/></a>':''),
                '   <h3 class="title"><a href="'+item.url+'">'+item.title+'</a></h3>',
                '   <p class="desc">'+item.description+'</p>',
                '   <div class="attr">',
                (item.author?'       <span class="attr-author">'+item.author+'</span>':''),
                '       <span class="attr-time">'+item.published+'</span>',
                tags.join("\r\n"),
                '   </div>',
                '</div>'].join("\r\n");
            return item;
        }

    }
});

$(function(){
    // nav active
    if( window.ENV && window.ENV.catid ){
        $('#nav-global .nav-item[data-attr="'+window.ENV.catid+'"]').addClass('active');
    }
    //Í³¼Æ´úÂë
    if( window.ENV && window.ENV.contentid && window.ENV.page==='show' ){
        $.getJSON(window.APP_URL+'?app=system&controller=content&action=stat&jsoncallback=?&contentid='+window.ENV.contentid,function(data){
        });
    }

});
