function parseTitle(title) {
    const titleElements = title.split('-');
    let prefix = null;
    let mainTitle = null;
    if (titleElements.length == 1) {
        mainTitle = titleElements[0];
    } else if (titleElements.length == 2) {
        prefix = titleElements[0];
        mainTitle = titleElements[1];
    } else {
        mainTitle = title;
    }
    return [prefix ? prefix.trim() : null, mainTitle.trim()];
}

function readTitleWithoutPrefix(fileTitle) {
    console.log(`Parsing ${fileTitle}`)
    const [, mainTitle] = parseTitle(fileTitle);
    return mainTitle;
}

module.exports = readTitleWithoutPrefix;